in vec3 ge_VertexTexcoord;
in vec4 ge_VertexColor;
in vec3 ge_VertexNormal;
in vec3 _ge_VertexPosition;
#define ge_VertexPosition vec4(_ge_VertexPosition, 1.0)

uniform mat4 ge_MatrixProjection;
uniform mat4 ge_MatrixModelView;
uniform mat3 ge_MatrixNormal;
uniform mat4 ge_MatrixView;
uniform mat4 ge_MatrixModel;
uniform mat4 ge_MatrixSubModel;
uniform mat4 ge_MatrixTexture[8];
uniform vec4 ge_ClipPlane;

smooth out vec3 ge_TexCoord0;

smooth out vec4 ge_Color;

#define ge_Position gl_Position
uniform vec3 ge_CameraPosition;
uniform float ge_Time;
uniform int ge_HasTexture;

struct ge_struct_Light {
	int flags;
	vec4 position;
	vec4 target;
	vec4 ambient;
	vec4 diffuse;
	vec4 specular;
	float spotCutoff;
	float spotCosCutoff;
	float spotExponent;
	float attenuation;
	vec3 vector;
	vec3 targetVector;
	float CosOuterConeAngle;
	float CosInnerMinusOuterAngle;
	sampler2DArray shadow;
};
struct ge_struct_material {
	vec4 ambient;
	vec4 diffuse;
	vec4 specular;
};

// Lights
uniform int ge_DynamicLightsCount;
uniform int ge_StaticLightsCount;
uniform ge_struct_Light ge_StaticLights[];
uniform ge_struct_Light ge_DynamicLights[];
