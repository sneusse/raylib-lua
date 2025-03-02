float Clamp(float value, float min, float max)
float Lerp(float start, float end, float amount)
float Normalize(float value, float start, float end)
float Remap(float value, float inputStart, float inputEnd, float outputStart, float outputEnd)
Vector2 Vector2Zero(void)
Vector2 Vector2One(void)
Vector2 Vector2Add(Vector2 v1, Vector2 v2)
Vector2 Vector2AddValue(Vector2 v, float add)
Vector2 Vector2Subtract(Vector2 v1, Vector2 v2)
Vector2 Vector2SubtractValue(Vector2 v, float sub)
float Vector2Length(Vector2 v)
float Vector2LengthSqr(Vector2 v)
float Vector2DotProduct(Vector2 v1, Vector2 v2)
float Vector2Distance(Vector2 v1, Vector2 v2)
float Vector2DistanceSqr(Vector2 v1, Vector2 v2)
float Vector2Angle(Vector2 v1, Vector2 v2)
Vector2 Vector2Scale(Vector2 v, float scale)
Vector2 Vector2Multiply(Vector2 v1, Vector2 v2)
Vector2 Vector2Negate(Vector2 v)
Vector2 Vector2Divide(Vector2 v1, Vector2 v2)
Vector2 Vector2Normalize(Vector2 v)
Vector2 Vector2Transform(Vector2 v, Matrix mat)
Vector2 Vector2Lerp(Vector2 v1, Vector2 v2, float amount)
Vector2 Vector2Reflect(Vector2 v, Vector2 normal)
Vector2 Vector2Rotate(Vector2 v, float degs)
Vector2 Vector2MoveTowards(Vector2 v, Vector2 target, float maxDistance)
Vector3 Vector3Zero(void)
Vector3 Vector3One(void)
Vector3 Vector3Add(Vector3 v1, Vector3 v2)
Vector3 Vector3AddValue(Vector3 v, float add)
Vector3 Vector3Subtract(Vector3 v1, Vector3 v2)
Vector3 Vector3SubtractValue(Vector3 v, float sub)
Vector3 Vector3Scale(Vector3 v, float scalar)
Vector3 Vector3Multiply(Vector3 v1, Vector3 v2)
Vector3 Vector3CrossProduct(Vector3 v1, Vector3 v2)
Vector3 Vector3Perpendicular(Vector3 v)
float Vector3Length(const Vector3 v)
float Vector3LengthSqr(const Vector3 v)
float Vector3DotProduct(Vector3 v1, Vector3 v2)
float Vector3Distance(Vector3 v1, Vector3 v2)
float Vector3DistanceSqr(Vector3 v1, Vector3 v2)
Vector2 Vector3Angle(Vector3 v1, Vector3 v2)
Vector3 Vector3Negate(Vector3 v)
Vector3 Vector3Divide(Vector3 v1, Vector3 v2)
Vector3 Vector3Normalize(Vector3 v)
void Vector3OrthoNormalize(Vector3 *v1, Vector3 *v2)
Vector3 Vector3Transform(Vector3 v, Matrix mat)
Vector3 Vector3RotateByQuaternion(Vector3 v, Quaternion q)
Vector3 Vector3Lerp(Vector3 v1, Vector3 v2, float amount)
Vector3 Vector3Reflect(Vector3 v, Vector3 normal)
Vector3 Vector3Min(Vector3 v1, Vector3 v2)
Vector3 Vector3Max(Vector3 v1, Vector3 v2)
Vector3 Vector3Barycenter(Vector3 p, Vector3 a, Vector3 b, Vector3 c)
float3 Vector3ToFloatV(Vector3 v)
float MatrixDeterminant(Matrix mat)
float MatrixTrace(Matrix mat)
Matrix MatrixTranspose(Matrix mat)
Matrix MatrixInvert(Matrix mat)
Matrix MatrixNormalize(Matrix mat)
Matrix MatrixIdentity(void)
Matrix MatrixAdd(Matrix left, Matrix right)
Matrix MatrixSubtract(Matrix left, Matrix right)
Matrix MatrixMultiply(Matrix left, Matrix right)
Matrix MatrixTranslate(float x, float y, float z)
Matrix MatrixRotate(Vector3 axis, float angle)
Matrix MatrixRotateX(float angle)
Matrix MatrixRotateY(float angle)
Matrix MatrixRotateZ(float angle)
Matrix MatrixRotateXYZ(Vector3 ang)
Matrix MatrixRotateZYX(Vector3 ang)
Matrix MatrixScale(float x, float y, float z)
Matrix MatrixFrustum(double left, double right, double bottom, double top, double near, double far)
Matrix MatrixPerspective(double fovy, double aspect, double near, double far)
Matrix MatrixOrtho(double left, double right, double bottom, double top, double near, double far)
Matrix MatrixLookAt(Vector3 eye, Vector3 target, Vector3 up)
float16 MatrixToFloatV(Matrix mat)
Quaternion QuaternionAdd(Quaternion q1, Quaternion q2)
Quaternion QuaternionAddValue(Quaternion q, float add)
Quaternion QuaternionSubtract(Quaternion q1, Quaternion q2)
Quaternion QuaternionSubtractValue(Quaternion q, float sub)
Quaternion QuaternionIdentity(void)
float QuaternionLength(Quaternion q)
Quaternion QuaternionNormalize(Quaternion q)
Quaternion QuaternionInvert(Quaternion q)
Quaternion QuaternionMultiply(Quaternion q1, Quaternion q2)
Quaternion QuaternionScale(Quaternion q, float mul)
Quaternion QuaternionDivide(Quaternion q1, Quaternion q2)
Quaternion QuaternionLerp(Quaternion q1, Quaternion q2, float amount)
Quaternion QuaternionNlerp(Quaternion q1, Quaternion q2, float amount)
Quaternion QuaternionSlerp(Quaternion q1, Quaternion q2, float amount)
Quaternion QuaternionFromVector3ToVector3(Vector3 from, Vector3 to)
Quaternion QuaternionFromMatrix(Matrix mat)
Matrix QuaternionToMatrix(Quaternion q)
Quaternion QuaternionFromAxisAngle(Vector3 axis, float angle)
void QuaternionToAxisAngle(Quaternion q, Vector3 *outAxis, float *outAngle)
Quaternion QuaternionFromEuler(float pitch, float yaw, float roll)
Vector3 QuaternionToEuler(Quaternion q)
Quaternion QuaternionTransform(Quaternion q, Matrix mat)
Vector3 Vector3Unproject(Vector3 source, Matrix projection, Matrix view)