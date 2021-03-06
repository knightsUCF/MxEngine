// Copyright(c) 2019 - 2020, #Momo
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met :
// 
// 1. Redistributions of source code must retain the above copyright notice, this
// list of conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following disclaimer in the documentation
// and /or other materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED.IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#pragma once

namespace MxEngine
{
	class TransformComponent;
	class Behaviour;
	class Script;
	class InstanceFactory;
	class Instance;
	class Skybox;
	class DebugDraw;
	class MeshRenderer;
	class MeshSource;
	class MeshLOD;
	class DirectionalLight;
	class PointLight;
	class SpotLight;
	class CameraController;
	class VRCameraController;
	class InputControl;
	class AudioSource;
	class AudioListener;
	class RigidBody;
	class BoxCollider;
	class SphereCollider;
	class CylinderCollider;
	class CapsuleCollider;
}

namespace MxEngine::GUI
{
	void TransformEditor(TransformComponent& transform);
	void BehaviourEditor(Behaviour& behaviour);
	void ScriptEditor(Script& script);
	void InstanceFactoryEditor(InstanceFactory& instanceFactory);
	void InstanceEditor(Instance& instance);
	void SkyboxEditor(Skybox& skybox);
	void DebugDrawEditor(DebugDraw& debugDraw);
	void MeshRendererEditor(MeshRenderer& meshRenderer);
	void MeshSourceEditor(MeshSource& meshSource);
	void MeshLODEditor(MeshLOD& meshLOD);
	void DirectionalLightEditor(DirectionalLight& dirLight);
	void PointLightEditor(PointLight& pointLight);
	void SpotLightEditor(SpotLight& spotLight);
	void CameraControllerEditor(CameraController& camera);
	void VRCameraControllerEditor(VRCameraController& vrCameraController);
	void InputControlEditor(InputControl& inputControl);
	void AudioSourceEditor(AudioSource& audioSource);
	void AudioListenerEditor(AudioListener& audioListener);
	void RigidBodyEditor(RigidBody& rigidBody);
	void BoxColliderEditor(BoxCollider& boxCollider);
	void SphereColliderEditor(SphereCollider& sphereCollider);
	void CylinderColliderEditor(CylinderCollider& cylinderCollider);
	void CapsuleColliderEditor(CapsuleCollider& capsuleCollider);
}