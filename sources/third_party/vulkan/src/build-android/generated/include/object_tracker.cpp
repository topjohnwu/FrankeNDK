// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See object_tracker_generator.py for modifications


/***************************************************************************
 *
 * Copyright (c) 2015-2018 The Khronos Group Inc.
 * Copyright (c) 2015-2018 Valve Corporation
 * Copyright (c) 2015-2018 LunarG, Inc.
 * Copyright (c) 2015-2018 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Mark Lobodzinski <mark@lunarg.com>
 * Author: Dave Houlton <daveh@lunarg.com>
 *
 ****************************************************************************/


#include "object_tracker.h"

namespace object_tracker {


// ObjectTracker undestroyed objects validation function
void ReportUndestroyedObjects(VkDevice device, const std::string& error_code) {
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeCommandBuffer, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeSemaphore, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeFence, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeDeviceMemory, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeBuffer, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeImage, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeEvent, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeQueryPool, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeBufferView, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeImageView, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeShaderModule, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypePipelineCache, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypePipelineLayout, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeRenderPass, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypePipeline, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeDescriptorSetLayout, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeSampler, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeDescriptorPool, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeDescriptorSet, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeFramebuffer, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeCommandPool, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeSamplerYcbcrConversion, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeDescriptorUpdateTemplate, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeSurfaceKHR, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeSwapchainKHR, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeDisplayKHR, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeDisplayModeKHR, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeDebugReportCallbackEXT, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeObjectTableNVX, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeIndirectCommandsLayoutNVX, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeDebugUtilsMessengerEXT, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeValidationCacheEXT, error_code);
    DeviceReportUndestroyedObjects(device, kVulkanObjectTypeAccelerationStructureNVX, error_code);
}

void DestroyUndestroyedObjects(VkDevice device) {
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeCommandBuffer);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeSemaphore);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeFence);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeDeviceMemory);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeBuffer);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeImage);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeEvent);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeQueryPool);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeBufferView);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeImageView);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeShaderModule);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypePipelineCache);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypePipelineLayout);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeRenderPass);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypePipeline);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeDescriptorSetLayout);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeSampler);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeDescriptorPool);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeDescriptorSet);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeFramebuffer);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeCommandPool);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeSamplerYcbcrConversion);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeDescriptorUpdateTemplate);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeSurfaceKHR);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeSwapchainKHR);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeDisplayKHR);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeDisplayModeKHR);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeDebugReportCallbackEXT);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeObjectTableNVX);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeIndirectCommandsLayoutNVX);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeDebugUtilsMessengerEXT);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeValidationCacheEXT);
    DeviceDestroyUndestroyedObjects(device, kVulkanObjectTypeAccelerationStructureNVX);
}



// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateInstance(
    const VkInstanceCreateInfo*                 pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkInstance*                                 pInstance);

// Declare only
VKAPI_ATTR void VKAPI_CALL DestroyInstance(
    VkInstance                                  instance,
    const VkAllocationCallbacks*                pAllocator);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL EnumeratePhysicalDevices(
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceCount,
    VkPhysicalDevice*                           pPhysicalDevices);

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFeatures(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures*                   pFeatures)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceFeatures-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceFeatures(physicalDevice, pFeatures);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties*                         pFormatProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceFormatProperties-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties);

}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceImageFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkImageFormatProperties*                    pImageFormatProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceImageFormatProperties-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties);

    return result;
}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceProperties(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties*                 pProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceProperties-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceProperties(physicalDevice, pProperties);

}

// Declare only
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceQueueFamilyProperties(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties*                    pQueueFamilyProperties);

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceMemoryProperties(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties*           pMemoryProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceMemoryProperties-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties);

}

// Declare only
VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL GetInstanceProcAddr(
    VkInstance                                  instance,
    const char*                                 pName);

// Declare only
VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL GetDeviceProcAddr(
    VkDevice                                    device,
    const char*                                 pName);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateDevice(
    VkPhysicalDevice                            physicalDevice,
    const VkDeviceCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDevice*                                   pDevice);

// Declare only
VKAPI_ATTR void VKAPI_CALL DestroyDevice(
    VkDevice                                    device,
    const VkAllocationCallbacks*                pAllocator);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL EnumerateInstanceExtensionProperties(
    const char*                                 pLayerName,
    uint32_t*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL EnumerateDeviceExtensionProperties(
    VkPhysicalDevice                            physicalDevice,
    const char*                                 pLayerName,
    uint32_t*                                   pPropertyCount,
    VkExtensionProperties*                      pProperties);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL EnumerateInstanceLayerProperties(
    uint32_t*                                   pPropertyCount,
    VkLayerProperties*                          pProperties);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL EnumerateDeviceLayerProperties(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkLayerProperties*                          pProperties);

// Declare only
VKAPI_ATTR void VKAPI_CALL GetDeviceQueue(
    VkDevice                                    device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    VkQueue*                                    pQueue);

VKAPI_ATTR VkResult VKAPI_CALL QueueSubmit(
    VkQueue                                     queue,
    uint32_t                                    submitCount,
    const VkSubmitInfo*                         pSubmits,
    VkFence                                     fence)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(queue, queue, kVulkanObjectTypeQueue, false, "VUID-vkQueueSubmit-queue-parameter", "VUID-vkQueueSubmit-commonparent");
        if (pSubmits) {
            for (uint32_t index0 = 0; index0 < submitCount; ++index0) {
                for (uint32_t index1 = 0; index1 < pSubmits[index0].waitSemaphoreCount; ++index1) {
                    skip |= ValidateObject(queue, pSubmits[index0].pWaitSemaphores[index1], kVulkanObjectTypeSemaphore, false, "VUID-VkSubmitInfo-pWaitSemaphores-parameter", "VUID-VkSubmitInfo-commonparent");
                }
                for (uint32_t index1 = 0; index1 < pSubmits[index0].commandBufferCount; ++index1) {
                    skip |= ValidateObject(queue, pSubmits[index0].pCommandBuffers[index1], kVulkanObjectTypeCommandBuffer, false, "VUID-VkSubmitInfo-pCommandBuffers-parameter", "VUID-VkSubmitInfo-commonparent");
                }
                for (uint32_t index1 = 0; index1 < pSubmits[index0].signalSemaphoreCount; ++index1) {
                    skip |= ValidateObject(queue, pSubmits[index0].pSignalSemaphores[index1], kVulkanObjectTypeSemaphore, false, "VUID-VkSubmitInfo-pSignalSemaphores-parameter", "VUID-VkSubmitInfo-commonparent");
                }
            }
        }
        skip |= ValidateObject(queue, fence, kVulkanObjectTypeFence, true, "VUID-vkQueueSubmit-fence-parameter", "VUID-vkQueueSubmit-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(queue), layer_data_map)->device_dispatch_table.QueueSubmit(queue, submitCount, pSubmits, fence);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL QueueWaitIdle(
    VkQueue                                     queue)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(queue, queue, kVulkanObjectTypeQueue, false, "VUID-vkQueueWaitIdle-queue-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(queue), layer_data_map)->device_dispatch_table.QueueWaitIdle(queue);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL DeviceWaitIdle(
    VkDevice                                    device)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDeviceWaitIdle-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DeviceWaitIdle(device);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL AllocateMemory(
    VkDevice                                    device,
    const VkMemoryAllocateInfo*                 pAllocateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDeviceMemory*                             pMemory)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkAllocateMemory-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.AllocateMemory(device, pAllocateInfo, pAllocator, pMemory);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pMemory, kVulkanObjectTypeDeviceMemory, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL FreeMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkFreeMemory-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, memory, kVulkanObjectTypeDeviceMemory, true, "VUID-vkFreeMemory-memory-parameter", "VUID-vkFreeMemory-memory-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, memory, kVulkanObjectTypeDeviceMemory, pAllocator, kVUIDUndefined, kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.FreeMemory(device, memory, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL MapMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    void**                                      ppData)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkMapMemory-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, memory, kVulkanObjectTypeDeviceMemory, false, "VUID-vkMapMemory-memory-parameter", "VUID-vkMapMemory-memory-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.MapMemory(device, memory, offset, size, flags, ppData);

    return result;
}

VKAPI_ATTR void VKAPI_CALL UnmapMemory(
    VkDevice                                    device,
    VkDeviceMemory                              memory)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkUnmapMemory-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, memory, kVulkanObjectTypeDeviceMemory, false, "VUID-vkUnmapMemory-memory-parameter", "VUID-vkUnmapMemory-memory-parent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.UnmapMemory(device, memory);

}

VKAPI_ATTR VkResult VKAPI_CALL FlushMappedMemoryRanges(
    VkDevice                                    device,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkFlushMappedMemoryRanges-device-parameter", kVUIDUndefined);
        if (pMemoryRanges) {
            for (uint32_t index0 = 0; index0 < memoryRangeCount; ++index0) {
                skip |= ValidateObject(device, pMemoryRanges[index0].memory, kVulkanObjectTypeDeviceMemory, false, "VUID-VkMappedMemoryRange-memory-parameter", kVUIDUndefined);
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.FlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL InvalidateMappedMemoryRanges(
    VkDevice                                    device,
    uint32_t                                    memoryRangeCount,
    const VkMappedMemoryRange*                  pMemoryRanges)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkInvalidateMappedMemoryRanges-device-parameter", kVUIDUndefined);
        if (pMemoryRanges) {
            for (uint32_t index0 = 0; index0 < memoryRangeCount; ++index0) {
                skip |= ValidateObject(device, pMemoryRanges[index0].memory, kVulkanObjectTypeDeviceMemory, false, "VUID-VkMappedMemoryRange-memory-parameter", kVUIDUndefined);
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.InvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);

    return result;
}

VKAPI_ATTR void VKAPI_CALL GetDeviceMemoryCommitment(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkDeviceSize*                               pCommittedMemoryInBytes)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetDeviceMemoryCommitment-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, memory, kVulkanObjectTypeDeviceMemory, false, "VUID-vkGetDeviceMemoryCommitment-memory-parameter", "VUID-vkGetDeviceMemoryCommitment-memory-parent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes);

}

VKAPI_ATTR VkResult VKAPI_CALL BindBufferMemory(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkBindBufferMemory-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkBindBufferMemory-buffer-parameter", "VUID-vkBindBufferMemory-buffer-parent");
        skip |= ValidateObject(device, memory, kVulkanObjectTypeDeviceMemory, false, "VUID-vkBindBufferMemory-memory-parameter", "VUID-vkBindBufferMemory-memory-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.BindBufferMemory(device, buffer, memory, memoryOffset);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL BindImageMemory(
    VkDevice                                    device,
    VkImage                                     image,
    VkDeviceMemory                              memory,
    VkDeviceSize                                memoryOffset)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkBindImageMemory-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, image, kVulkanObjectTypeImage, false, "VUID-vkBindImageMemory-image-parameter", "VUID-vkBindImageMemory-image-parent");
        skip |= ValidateObject(device, memory, kVulkanObjectTypeDeviceMemory, false, "VUID-vkBindImageMemory-memory-parameter", "VUID-vkBindImageMemory-memory-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.BindImageMemory(device, image, memory, memoryOffset);

    return result;
}

VKAPI_ATTR void VKAPI_CALL GetBufferMemoryRequirements(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    VkMemoryRequirements*                       pMemoryRequirements)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetBufferMemoryRequirements-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkGetBufferMemoryRequirements-buffer-parameter", "VUID-vkGetBufferMemoryRequirements-buffer-parent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetBufferMemoryRequirements(device, buffer, pMemoryRequirements);

}

VKAPI_ATTR void VKAPI_CALL GetImageMemoryRequirements(
    VkDevice                                    device,
    VkImage                                     image,
    VkMemoryRequirements*                       pMemoryRequirements)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetImageMemoryRequirements-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, image, kVulkanObjectTypeImage, false, "VUID-vkGetImageMemoryRequirements-image-parameter", "VUID-vkGetImageMemoryRequirements-image-parent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetImageMemoryRequirements(device, image, pMemoryRequirements);

}

VKAPI_ATTR void VKAPI_CALL GetImageSparseMemoryRequirements(
    VkDevice                                    device,
    VkImage                                     image,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements*            pSparseMemoryRequirements)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetImageSparseMemoryRequirements-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, image, kVulkanObjectTypeImage, false, "VUID-vkGetImageSparseMemoryRequirements-image-parameter", "VUID-vkGetImageSparseMemoryRequirements-image-parent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceSparseImageFormatProperties(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties*              pProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceSparseImageFormatProperties-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties);

}

VKAPI_ATTR VkResult VKAPI_CALL QueueBindSparse(
    VkQueue                                     queue,
    uint32_t                                    bindInfoCount,
    const VkBindSparseInfo*                     pBindInfo,
    VkFence                                     fence)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(queue, queue, kVulkanObjectTypeQueue, false, "VUID-vkQueueBindSparse-queue-parameter", "VUID-vkQueueBindSparse-commonparent");
        if (pBindInfo) {
            for (uint32_t index0 = 0; index0 < bindInfoCount; ++index0) {
                for (uint32_t index1 = 0; index1 < pBindInfo[index0].waitSemaphoreCount; ++index1) {
                    skip |= ValidateObject(queue, pBindInfo[index0].pWaitSemaphores[index1], kVulkanObjectTypeSemaphore, false, "VUID-VkBindSparseInfo-pWaitSemaphores-parameter", "VUID-VkBindSparseInfo-commonparent");
                }
                if (pBindInfo[index0].pBufferBinds) {
                    for (uint32_t index1 = 0; index1 < pBindInfo[index0].bufferBindCount; ++index1) {
                        skip |= ValidateObject(queue, pBindInfo[index0].pBufferBinds[index1].buffer, kVulkanObjectTypeBuffer, false, "VUID-VkSparseBufferMemoryBindInfo-buffer-parameter", kVUIDUndefined);
                        if (pBindInfo[index0].pBufferBinds[index1].pBinds) {
                            for (uint32_t index2 = 0; index2 < pBindInfo[index0].pBufferBinds[index1].bindCount; ++index2) {
                                skip |= ValidateObject(queue, pBindInfo[index0].pBufferBinds[index1].pBinds[index2].memory, kVulkanObjectTypeDeviceMemory, true, "VUID-VkSparseMemoryBind-memory-parameter", kVUIDUndefined);
                            }
                        }
                    }
                }
                if (pBindInfo[index0].pImageOpaqueBinds) {
                    for (uint32_t index1 = 0; index1 < pBindInfo[index0].imageOpaqueBindCount; ++index1) {
                        skip |= ValidateObject(queue, pBindInfo[index0].pImageOpaqueBinds[index1].image, kVulkanObjectTypeImage, false, "VUID-VkSparseImageOpaqueMemoryBindInfo-image-parameter", kVUIDUndefined);
                        if (pBindInfo[index0].pImageOpaqueBinds[index1].pBinds) {
                            for (uint32_t index2 = 0; index2 < pBindInfo[index0].pImageOpaqueBinds[index1].bindCount; ++index2) {
                                skip |= ValidateObject(queue, pBindInfo[index0].pImageOpaqueBinds[index1].pBinds[index2].memory, kVulkanObjectTypeDeviceMemory, true, "VUID-VkSparseMemoryBind-memory-parameter", kVUIDUndefined);
                            }
                        }
                    }
                }
                if (pBindInfo[index0].pImageBinds) {
                    for (uint32_t index1 = 0; index1 < pBindInfo[index0].imageBindCount; ++index1) {
                        skip |= ValidateObject(queue, pBindInfo[index0].pImageBinds[index1].image, kVulkanObjectTypeImage, false, "VUID-VkSparseImageMemoryBindInfo-image-parameter", kVUIDUndefined);
                        if (pBindInfo[index0].pImageBinds[index1].pBinds) {
                            for (uint32_t index2 = 0; index2 < pBindInfo[index0].pImageBinds[index1].bindCount; ++index2) {
                                skip |= ValidateObject(queue, pBindInfo[index0].pImageBinds[index1].pBinds[index2].memory, kVulkanObjectTypeDeviceMemory, true, "VUID-VkSparseImageMemoryBind-memory-parameter", kVUIDUndefined);
                            }
                        }
                    }
                }
                for (uint32_t index1 = 0; index1 < pBindInfo[index0].signalSemaphoreCount; ++index1) {
                    skip |= ValidateObject(queue, pBindInfo[index0].pSignalSemaphores[index1], kVulkanObjectTypeSemaphore, false, "VUID-VkBindSparseInfo-pSignalSemaphores-parameter", "VUID-VkBindSparseInfo-commonparent");
                }
            }
        }
        skip |= ValidateObject(queue, fence, kVulkanObjectTypeFence, true, "VUID-vkQueueBindSparse-fence-parameter", "VUID-vkQueueBindSparse-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(queue), layer_data_map)->device_dispatch_table.QueueBindSparse(queue, bindInfoCount, pBindInfo, fence);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateFence(
    VkDevice                                    device,
    const VkFenceCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateFence-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateFence(device, pCreateInfo, pAllocator, pFence);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pFence, kVulkanObjectTypeFence, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyFence(
    VkDevice                                    device,
    VkFence                                     fence,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyFence-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, fence, kVulkanObjectTypeFence, true, "VUID-vkDestroyFence-fence-parameter", "VUID-vkDestroyFence-fence-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, fence, kVulkanObjectTypeFence, pAllocator, "VUID-vkDestroyFence-fence-01121", "VUID-vkDestroyFence-fence-01122");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyFence(device, fence, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL ResetFences(
    VkDevice                                    device,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkResetFences-device-parameter", kVUIDUndefined);
        for (uint32_t index0 = 0; index0 < fenceCount; ++index0) {
            skip |= ValidateObject(device, pFences[index0], kVulkanObjectTypeFence, false, "VUID-vkResetFences-pFences-parameter", "VUID-vkResetFences-pFences-parent");
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.ResetFences(device, fenceCount, pFences);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetFenceStatus(
    VkDevice                                    device,
    VkFence                                     fence)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetFenceStatus-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, fence, kVulkanObjectTypeFence, false, "VUID-vkGetFenceStatus-fence-parameter", "VUID-vkGetFenceStatus-fence-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetFenceStatus(device, fence);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL WaitForFences(
    VkDevice                                    device,
    uint32_t                                    fenceCount,
    const VkFence*                              pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkWaitForFences-device-parameter", kVUIDUndefined);
        for (uint32_t index0 = 0; index0 < fenceCount; ++index0) {
            skip |= ValidateObject(device, pFences[index0], kVulkanObjectTypeFence, false, "VUID-vkWaitForFences-pFences-parameter", "VUID-vkWaitForFences-pFences-parent");
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.WaitForFences(device, fenceCount, pFences, waitAll, timeout);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateSemaphore(
    VkDevice                                    device,
    const VkSemaphoreCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSemaphore*                                pSemaphore)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateSemaphore-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pSemaphore, kVulkanObjectTypeSemaphore, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroySemaphore(
    VkDevice                                    device,
    VkSemaphore                                 semaphore,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroySemaphore-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, semaphore, kVulkanObjectTypeSemaphore, true, "VUID-vkDestroySemaphore-semaphore-parameter", "VUID-vkDestroySemaphore-semaphore-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, semaphore, kVulkanObjectTypeSemaphore, pAllocator, "VUID-vkDestroySemaphore-semaphore-01138", "VUID-vkDestroySemaphore-semaphore-01139");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroySemaphore(device, semaphore, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateEvent(
    VkDevice                                    device,
    const VkEventCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkEvent*                                    pEvent)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateEvent-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateEvent(device, pCreateInfo, pAllocator, pEvent);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pEvent, kVulkanObjectTypeEvent, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyEvent(
    VkDevice                                    device,
    VkEvent                                     event,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyEvent-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, event, kVulkanObjectTypeEvent, true, "VUID-vkDestroyEvent-event-parameter", "VUID-vkDestroyEvent-event-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, event, kVulkanObjectTypeEvent, pAllocator, "VUID-vkDestroyEvent-event-01146", "VUID-vkDestroyEvent-event-01147");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyEvent(device, event, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL GetEventStatus(
    VkDevice                                    device,
    VkEvent                                     event)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetEventStatus-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, event, kVulkanObjectTypeEvent, false, "VUID-vkGetEventStatus-event-parameter", "VUID-vkGetEventStatus-event-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetEventStatus(device, event);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL SetEvent(
    VkDevice                                    device,
    VkEvent                                     event)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkSetEvent-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, event, kVulkanObjectTypeEvent, false, "VUID-vkSetEvent-event-parameter", "VUID-vkSetEvent-event-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.SetEvent(device, event);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL ResetEvent(
    VkDevice                                    device,
    VkEvent                                     event)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkResetEvent-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, event, kVulkanObjectTypeEvent, false, "VUID-vkResetEvent-event-parameter", "VUID-vkResetEvent-event-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.ResetEvent(device, event);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateQueryPool(
    VkDevice                                    device,
    const VkQueryPoolCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkQueryPool*                                pQueryPool)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateQueryPool-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pQueryPool, kVulkanObjectTypeQueryPool, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyQueryPool(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyQueryPool-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, queryPool, kVulkanObjectTypeQueryPool, true, "VUID-vkDestroyQueryPool-queryPool-parameter", "VUID-vkDestroyQueryPool-queryPool-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, queryPool, kVulkanObjectTypeQueryPool, pAllocator, "VUID-vkDestroyQueryPool-queryPool-00794", "VUID-vkDestroyQueryPool-queryPool-00795");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyQueryPool(device, queryPool, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL GetQueryPoolResults(
    VkDevice                                    device,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    size_t                                      dataSize,
    void*                                       pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetQueryPoolResults-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, queryPool, kVulkanObjectTypeQueryPool, false, "VUID-vkGetQueryPoolResults-queryPool-parameter", "VUID-vkGetQueryPoolResults-queryPool-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateBuffer(
    VkDevice                                    device,
    const VkBufferCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBuffer*                                   pBuffer)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateBuffer-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateBuffer(device, pCreateInfo, pAllocator, pBuffer);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pBuffer, kVulkanObjectTypeBuffer, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyBuffer(
    VkDevice                                    device,
    VkBuffer                                    buffer,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyBuffer-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, buffer, kVulkanObjectTypeBuffer, true, "VUID-vkDestroyBuffer-buffer-parameter", "VUID-vkDestroyBuffer-buffer-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, buffer, kVulkanObjectTypeBuffer, pAllocator, "VUID-vkDestroyBuffer-buffer-00923", "VUID-vkDestroyBuffer-buffer-00924");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyBuffer(device, buffer, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateBufferView(
    VkDevice                                    device,
    const VkBufferViewCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkBufferView*                               pView)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateBufferView-device-parameter", kVUIDUndefined);
        if (pCreateInfo) {
            skip |= ValidateObject(device, pCreateInfo->buffer, kVulkanObjectTypeBuffer, false, "VUID-VkBufferViewCreateInfo-buffer-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateBufferView(device, pCreateInfo, pAllocator, pView);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pView, kVulkanObjectTypeBufferView, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyBufferView(
    VkDevice                                    device,
    VkBufferView                                bufferView,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyBufferView-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, bufferView, kVulkanObjectTypeBufferView, true, "VUID-vkDestroyBufferView-bufferView-parameter", "VUID-vkDestroyBufferView-bufferView-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, bufferView, kVulkanObjectTypeBufferView, pAllocator, "VUID-vkDestroyBufferView-bufferView-00937", "VUID-vkDestroyBufferView-bufferView-00938");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyBufferView(device, bufferView, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateImage(
    VkDevice                                    device,
    const VkImageCreateInfo*                    pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImage*                                    pImage)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateImage-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateImage(device, pCreateInfo, pAllocator, pImage);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pImage, kVulkanObjectTypeImage, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyImage(
    VkDevice                                    device,
    VkImage                                     image,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyImage-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, image, kVulkanObjectTypeImage, true, "VUID-vkDestroyImage-image-parameter", "VUID-vkDestroyImage-image-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, image, kVulkanObjectTypeImage, pAllocator, "VUID-vkDestroyImage-image-01001", "VUID-vkDestroyImage-image-01002");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyImage(device, image, pAllocator);

}

VKAPI_ATTR void VKAPI_CALL GetImageSubresourceLayout(
    VkDevice                                    device,
    VkImage                                     image,
    const VkImageSubresource*                   pSubresource,
    VkSubresourceLayout*                        pLayout)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetImageSubresourceLayout-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, image, kVulkanObjectTypeImage, false, "VUID-vkGetImageSubresourceLayout-image-parameter", "VUID-vkGetImageSubresourceLayout-image-parent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetImageSubresourceLayout(device, image, pSubresource, pLayout);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateImageView(
    VkDevice                                    device,
    const VkImageViewCreateInfo*                pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkImageView*                                pView)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateImageView-device-parameter", kVUIDUndefined);
        if (pCreateInfo) {
            skip |= ValidateObject(device, pCreateInfo->image, kVulkanObjectTypeImage, false, "VUID-VkImageViewCreateInfo-image-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateImageView(device, pCreateInfo, pAllocator, pView);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pView, kVulkanObjectTypeImageView, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyImageView(
    VkDevice                                    device,
    VkImageView                                 imageView,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyImageView-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, imageView, kVulkanObjectTypeImageView, true, "VUID-vkDestroyImageView-imageView-parameter", "VUID-vkDestroyImageView-imageView-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, imageView, kVulkanObjectTypeImageView, pAllocator, "VUID-vkDestroyImageView-imageView-01027", "VUID-vkDestroyImageView-imageView-01028");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyImageView(device, imageView, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateShaderModule(
    VkDevice                                    device,
    const VkShaderModuleCreateInfo*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkShaderModule*                             pShaderModule)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateShaderModule-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pShaderModule, kVulkanObjectTypeShaderModule, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyShaderModule(
    VkDevice                                    device,
    VkShaderModule                              shaderModule,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyShaderModule-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, shaderModule, kVulkanObjectTypeShaderModule, true, "VUID-vkDestroyShaderModule-shaderModule-parameter", "VUID-vkDestroyShaderModule-shaderModule-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, shaderModule, kVulkanObjectTypeShaderModule, pAllocator, "VUID-vkDestroyShaderModule-shaderModule-01092", "VUID-vkDestroyShaderModule-shaderModule-01093");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyShaderModule(device, shaderModule, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreatePipelineCache(
    VkDevice                                    device,
    const VkPipelineCacheCreateInfo*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineCache*                            pPipelineCache)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreatePipelineCache-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pPipelineCache, kVulkanObjectTypePipelineCache, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyPipelineCache(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyPipelineCache-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, pipelineCache, kVulkanObjectTypePipelineCache, true, "VUID-vkDestroyPipelineCache-pipelineCache-parameter", "VUID-vkDestroyPipelineCache-pipelineCache-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, pipelineCache, kVulkanObjectTypePipelineCache, pAllocator, "VUID-vkDestroyPipelineCache-pipelineCache-00771", "VUID-vkDestroyPipelineCache-pipelineCache-00772");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyPipelineCache(device, pipelineCache, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL GetPipelineCacheData(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    size_t*                                     pDataSize,
    void*                                       pData)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetPipelineCacheData-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, pipelineCache, kVulkanObjectTypePipelineCache, false, "VUID-vkGetPipelineCacheData-pipelineCache-parameter", "VUID-vkGetPipelineCacheData-pipelineCache-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetPipelineCacheData(device, pipelineCache, pDataSize, pData);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL MergePipelineCaches(
    VkDevice                                    device,
    VkPipelineCache                             dstCache,
    uint32_t                                    srcCacheCount,
    const VkPipelineCache*                      pSrcCaches)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkMergePipelineCaches-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, dstCache, kVulkanObjectTypePipelineCache, false, "VUID-vkMergePipelineCaches-dstCache-parameter", "VUID-vkMergePipelineCaches-dstCache-parent");
        for (uint32_t index0 = 0; index0 < srcCacheCount; ++index0) {
            skip |= ValidateObject(device, pSrcCaches[index0], kVulkanObjectTypePipelineCache, false, "VUID-vkMergePipelineCaches-pSrcCaches-parameter", "VUID-vkMergePipelineCaches-pSrcCaches-parent");
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.MergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateGraphicsPipelines(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkGraphicsPipelineCreateInfo*         pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateGraphicsPipelines-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, pipelineCache, kVulkanObjectTypePipelineCache, true, "VUID-vkCreateGraphicsPipelines-pipelineCache-parameter", "VUID-vkCreateGraphicsPipelines-pipelineCache-parent");
        if (pCreateInfos) {
            for (uint32_t index0 = 0; index0 < createInfoCount; ++index0) {
                if (pCreateInfos[index0].pStages) {
                    for (uint32_t index1 = 0; index1 < pCreateInfos[index0].stageCount; ++index1) {
                        skip |= ValidateObject(device, pCreateInfos[index0].pStages[index1].module, kVulkanObjectTypeShaderModule, false, "VUID-VkPipelineShaderStageCreateInfo-module-parameter", kVUIDUndefined);
                    }
                }
                skip |= ValidateObject(device, pCreateInfos[index0].layout, kVulkanObjectTypePipelineLayout, false, "VUID-VkGraphicsPipelineCreateInfo-layout-parameter", "VUID-VkGraphicsPipelineCreateInfo-commonparent");
                skip |= ValidateObject(device, pCreateInfos[index0].renderPass, kVulkanObjectTypeRenderPass, false, "VUID-VkGraphicsPipelineCreateInfo-renderPass-parameter", "VUID-VkGraphicsPipelineCreateInfo-commonparent");
                skip |= ValidateObject(device, pCreateInfos[index0].basePipelineHandle, kVulkanObjectTypePipeline, true, kVUIDUndefined, "VUID-VkGraphicsPipelineCreateInfo-commonparent");
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        for (uint32_t index = 0; index < createInfoCount; index++) {
            CreateObject(device, pPipelines[index], kVulkanObjectTypePipeline, pAllocator);
        }
    }
    return result;
}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateComputePipelines(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkComputePipelineCreateInfo*          pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines);

VKAPI_ATTR void VKAPI_CALL DestroyPipeline(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyPipeline-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, pipeline, kVulkanObjectTypePipeline, true, "VUID-vkDestroyPipeline-pipeline-parameter", "VUID-vkDestroyPipeline-pipeline-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, pipeline, kVulkanObjectTypePipeline, pAllocator, "VUID-vkDestroyPipeline-pipeline-00766", "VUID-vkDestroyPipeline-pipeline-00767");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyPipeline(device, pipeline, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreatePipelineLayout(
    VkDevice                                    device,
    const VkPipelineLayoutCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkPipelineLayout*                           pPipelineLayout)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreatePipelineLayout-device-parameter", kVUIDUndefined);
        if (pCreateInfo) {
            for (uint32_t index1 = 0; index1 < pCreateInfo->setLayoutCount; ++index1) {
                skip |= ValidateObject(device, pCreateInfo->pSetLayouts[index1], kVulkanObjectTypeDescriptorSetLayout, false, "VUID-VkPipelineLayoutCreateInfo-pSetLayouts-parameter", kVUIDUndefined);
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pPipelineLayout, kVulkanObjectTypePipelineLayout, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyPipelineLayout(
    VkDevice                                    device,
    VkPipelineLayout                            pipelineLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyPipelineLayout-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, pipelineLayout, kVulkanObjectTypePipelineLayout, true, "VUID-vkDestroyPipelineLayout-pipelineLayout-parameter", "VUID-vkDestroyPipelineLayout-pipelineLayout-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, pipelineLayout, kVulkanObjectTypePipelineLayout, pAllocator, "VUID-vkDestroyPipelineLayout-pipelineLayout-00299", "VUID-vkDestroyPipelineLayout-pipelineLayout-00300");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyPipelineLayout(device, pipelineLayout, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateSampler(
    VkDevice                                    device,
    const VkSamplerCreateInfo*                  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSampler*                                  pSampler)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateSampler-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateSampler(device, pCreateInfo, pAllocator, pSampler);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pSampler, kVulkanObjectTypeSampler, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroySampler(
    VkDevice                                    device,
    VkSampler                                   sampler,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroySampler-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, sampler, kVulkanObjectTypeSampler, true, "VUID-vkDestroySampler-sampler-parameter", "VUID-vkDestroySampler-sampler-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, sampler, kVulkanObjectTypeSampler, pAllocator, "VUID-vkDestroySampler-sampler-01083", "VUID-vkDestroySampler-sampler-01084");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroySampler(device, sampler, pAllocator);

}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorSetLayout(
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorSetLayout*                      pSetLayout);

VKAPI_ATTR void VKAPI_CALL DestroyDescriptorSetLayout(
    VkDevice                                    device,
    VkDescriptorSetLayout                       descriptorSetLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyDescriptorSetLayout-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, descriptorSetLayout, kVulkanObjectTypeDescriptorSetLayout, true, "VUID-vkDestroyDescriptorSetLayout-descriptorSetLayout-parameter", "VUID-vkDestroyDescriptorSetLayout-descriptorSetLayout-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, descriptorSetLayout, kVulkanObjectTypeDescriptorSetLayout, pAllocator, "VUID-vkDestroyDescriptorSetLayout-descriptorSetLayout-00284", "VUID-vkDestroyDescriptorSetLayout-descriptorSetLayout-00285");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorPool(
    VkDevice                                    device,
    const VkDescriptorPoolCreateInfo*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorPool*                           pDescriptorPool)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateDescriptorPool-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pDescriptorPool, kVulkanObjectTypeDescriptorPool, pAllocator);
    }
    return result;
}

// Declare only
VKAPI_ATTR void VKAPI_CALL DestroyDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    const VkAllocationCallbacks*                pAllocator);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL ResetDescriptorPool(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL AllocateDescriptorSets(
    VkDevice                                    device,
    const VkDescriptorSetAllocateInfo*          pAllocateInfo,
    VkDescriptorSet*                            pDescriptorSets);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL FreeDescriptorSets(
    VkDevice                                    device,
    VkDescriptorPool                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets);

// Declare only
VKAPI_ATTR void VKAPI_CALL UpdateDescriptorSets(
    VkDevice                                    device,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const VkCopyDescriptorSet*                  pDescriptorCopies);

VKAPI_ATTR VkResult VKAPI_CALL CreateFramebuffer(
    VkDevice                                    device,
    const VkFramebufferCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFramebuffer*                              pFramebuffer)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateFramebuffer-device-parameter", kVUIDUndefined);
        if (pCreateInfo) {
            skip |= ValidateObject(device, pCreateInfo->renderPass, kVulkanObjectTypeRenderPass, false, "VUID-VkFramebufferCreateInfo-renderPass-parameter", "VUID-VkFramebufferCreateInfo-commonparent");
            for (uint32_t index1 = 0; index1 < pCreateInfo->attachmentCount; ++index1) {
                skip |= ValidateObject(device, pCreateInfo->pAttachments[index1], kVulkanObjectTypeImageView, false, "VUID-VkFramebufferCreateInfo-pAttachments-parameter", "VUID-VkFramebufferCreateInfo-commonparent");
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pFramebuffer, kVulkanObjectTypeFramebuffer, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyFramebuffer(
    VkDevice                                    device,
    VkFramebuffer                               framebuffer,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyFramebuffer-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, framebuffer, kVulkanObjectTypeFramebuffer, true, "VUID-vkDestroyFramebuffer-framebuffer-parameter", "VUID-vkDestroyFramebuffer-framebuffer-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, framebuffer, kVulkanObjectTypeFramebuffer, pAllocator, "VUID-vkDestroyFramebuffer-framebuffer-00893", "VUID-vkDestroyFramebuffer-framebuffer-00894");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyFramebuffer(device, framebuffer, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateRenderPass(
    VkDevice                                    device,
    const VkRenderPassCreateInfo*               pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateRenderPass-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pRenderPass, kVulkanObjectTypeRenderPass, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyRenderPass(
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyRenderPass-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, renderPass, kVulkanObjectTypeRenderPass, true, "VUID-vkDestroyRenderPass-renderPass-parameter", "VUID-vkDestroyRenderPass-renderPass-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, renderPass, kVulkanObjectTypeRenderPass, pAllocator, "VUID-vkDestroyRenderPass-renderPass-00874", "VUID-vkDestroyRenderPass-renderPass-00875");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyRenderPass(device, renderPass, pAllocator);

}

VKAPI_ATTR void VKAPI_CALL GetRenderAreaGranularity(
    VkDevice                                    device,
    VkRenderPass                                renderPass,
    VkExtent2D*                                 pGranularity)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetRenderAreaGranularity-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, renderPass, kVulkanObjectTypeRenderPass, false, "VUID-vkGetRenderAreaGranularity-renderPass-parameter", "VUID-vkGetRenderAreaGranularity-renderPass-parent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetRenderAreaGranularity(device, renderPass, pGranularity);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateCommandPool(
    VkDevice                                    device,
    const VkCommandPoolCreateInfo*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkCommandPool*                              pCommandPool)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateCommandPool-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pCommandPool, kVulkanObjectTypeCommandPool, pAllocator);
    }
    return result;
}

// Declare only
VKAPI_ATTR void VKAPI_CALL DestroyCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL ResetCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolResetFlags                     flags)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkResetCommandPool-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, commandPool, kVulkanObjectTypeCommandPool, false, "VUID-vkResetCommandPool-commandPool-parameter", "VUID-vkResetCommandPool-commandPool-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.ResetCommandPool(device, commandPool, flags);

    return result;
}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL AllocateCommandBuffers(
    VkDevice                                    device,
    const VkCommandBufferAllocateInfo*          pAllocateInfo,
    VkCommandBuffer*                            pCommandBuffers);

// Declare only
VKAPI_ATTR void VKAPI_CALL FreeCommandBuffers(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL BeginCommandBuffer(
    VkCommandBuffer                             commandBuffer,
    const VkCommandBufferBeginInfo*             pBeginInfo);

VKAPI_ATTR VkResult VKAPI_CALL EndCommandBuffer(
    VkCommandBuffer                             commandBuffer)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkEndCommandBuffer-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.EndCommandBuffer(commandBuffer);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL ResetCommandBuffer(
    VkCommandBuffer                             commandBuffer,
    VkCommandBufferResetFlags                   flags)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkResetCommandBuffer-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.ResetCommandBuffer(commandBuffer, flags);

    return result;
}

VKAPI_ATTR void VKAPI_CALL CmdBindPipeline(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipeline                                  pipeline)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBindPipeline-commandBuffer-parameter", "VUID-vkCmdBindPipeline-commonparent");
        skip |= ValidateObject(commandBuffer, pipeline, kVulkanObjectTypePipeline, false, "VUID-vkCmdBindPipeline-pipeline-parameter", "VUID-vkCmdBindPipeline-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);

}

VKAPI_ATTR void VKAPI_CALL CmdSetViewport(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkViewport*                           pViewports)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetViewport-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);

}

VKAPI_ATTR void VKAPI_CALL CmdSetScissor(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const VkRect2D*                             pScissors)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetScissor-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);

}

VKAPI_ATTR void VKAPI_CALL CmdSetLineWidth(
    VkCommandBuffer                             commandBuffer,
    float                                       lineWidth)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetLineWidth-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetLineWidth(commandBuffer, lineWidth);

}

VKAPI_ATTR void VKAPI_CALL CmdSetDepthBias(
    VkCommandBuffer                             commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetDepthBias-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);

}

VKAPI_ATTR void VKAPI_CALL CmdSetBlendConstants(
    VkCommandBuffer                             commandBuffer,
    const float                                 blendConstants[4])
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetBlendConstants-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetBlendConstants(commandBuffer, blendConstants);

}

VKAPI_ATTR void VKAPI_CALL CmdSetDepthBounds(
    VkCommandBuffer                             commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetDepthBounds-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);

}

VKAPI_ATTR void VKAPI_CALL CmdSetStencilCompareMask(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetStencilCompareMask-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);

}

VKAPI_ATTR void VKAPI_CALL CmdSetStencilWriteMask(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetStencilWriteMask-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);

}

VKAPI_ATTR void VKAPI_CALL CmdSetStencilReference(
    VkCommandBuffer                             commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetStencilReference-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetStencilReference(commandBuffer, faceMask, reference);

}

VKAPI_ATTR void VKAPI_CALL CmdBindDescriptorSets(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    const VkDescriptorSet*                      pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    const uint32_t*                             pDynamicOffsets)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBindDescriptorSets-commandBuffer-parameter", "VUID-vkCmdBindDescriptorSets-commonparent");
        skip |= ValidateObject(commandBuffer, layout, kVulkanObjectTypePipelineLayout, false, "VUID-vkCmdBindDescriptorSets-layout-parameter", "VUID-vkCmdBindDescriptorSets-commonparent");
        for (uint32_t index0 = 0; index0 < descriptorSetCount; ++index0) {
            skip |= ValidateObject(commandBuffer, pDescriptorSets[index0], kVulkanObjectTypeDescriptorSet, false, "VUID-vkCmdBindDescriptorSets-pDescriptorSets-parameter", "VUID-vkCmdBindDescriptorSets-commonparent");
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);

}

VKAPI_ATTR void VKAPI_CALL CmdBindIndexBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBindIndexBuffer-commandBuffer-parameter", "VUID-vkCmdBindIndexBuffer-commonparent");
        skip |= ValidateObject(commandBuffer, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdBindIndexBuffer-buffer-parameter", "VUID-vkCmdBindIndexBuffer-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);

}

VKAPI_ATTR void VKAPI_CALL CmdBindVertexBuffers(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBindVertexBuffers-commandBuffer-parameter", "VUID-vkCmdBindVertexBuffers-commonparent");
        for (uint32_t index0 = 0; index0 < bindingCount; ++index0) {
            skip |= ValidateObject(commandBuffer, pBuffers[index0], kVulkanObjectTypeBuffer, false, "VUID-vkCmdBindVertexBuffers-pBuffers-parameter", "VUID-vkCmdBindVertexBuffers-commonparent");
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);

}

VKAPI_ATTR void VKAPI_CALL CmdDraw(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDraw-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);

}

VKAPI_ATTR void VKAPI_CALL CmdDrawIndexed(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    indexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstIndex,
    int32_t                                     vertexOffset,
    uint32_t                                    firstInstance)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDrawIndexed-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);

}

VKAPI_ATTR void VKAPI_CALL CmdDrawIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDrawIndirect-commandBuffer-parameter", "VUID-vkCmdDrawIndirect-commonparent");
        skip |= ValidateObject(commandBuffer, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawIndirect-buffer-parameter", "VUID-vkCmdDrawIndirect-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);

}

VKAPI_ATTR void VKAPI_CALL CmdDrawIndexedIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDrawIndexedIndirect-commandBuffer-parameter", "VUID-vkCmdDrawIndexedIndirect-commonparent");
        skip |= ValidateObject(commandBuffer, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawIndexedIndirect-buffer-parameter", "VUID-vkCmdDrawIndexedIndirect-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);

}

VKAPI_ATTR void VKAPI_CALL CmdDispatch(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDispatch-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);

}

VKAPI_ATTR void VKAPI_CALL CmdDispatchIndirect(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDispatchIndirect-commandBuffer-parameter", "VUID-vkCmdDispatchIndirect-commonparent");
        skip |= ValidateObject(commandBuffer, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDispatchIndirect-buffer-parameter", "VUID-vkCmdDispatchIndirect-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDispatchIndirect(commandBuffer, buffer, offset);

}

VKAPI_ATTR void VKAPI_CALL CmdCopyBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferCopy*                         pRegions)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdCopyBuffer-commandBuffer-parameter", "VUID-vkCmdCopyBuffer-commonparent");
        skip |= ValidateObject(commandBuffer, srcBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdCopyBuffer-srcBuffer-parameter", "VUID-vkCmdCopyBuffer-commonparent");
        skip |= ValidateObject(commandBuffer, dstBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdCopyBuffer-dstBuffer-parameter", "VUID-vkCmdCopyBuffer-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);

}

VKAPI_ATTR void VKAPI_CALL CmdCopyImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageCopy*                          pRegions)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdCopyImage-commandBuffer-parameter", "VUID-vkCmdCopyImage-commonparent");
        skip |= ValidateObject(commandBuffer, srcImage, kVulkanObjectTypeImage, false, "VUID-vkCmdCopyImage-srcImage-parameter", "VUID-vkCmdCopyImage-commonparent");
        skip |= ValidateObject(commandBuffer, dstImage, kVulkanObjectTypeImage, false, "VUID-vkCmdCopyImage-dstImage-parameter", "VUID-vkCmdCopyImage-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);

}

VKAPI_ATTR void VKAPI_CALL CmdBlitImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageBlit*                          pRegions,
    VkFilter                                    filter)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBlitImage-commandBuffer-parameter", "VUID-vkCmdBlitImage-commonparent");
        skip |= ValidateObject(commandBuffer, srcImage, kVulkanObjectTypeImage, false, "VUID-vkCmdBlitImage-srcImage-parameter", "VUID-vkCmdBlitImage-commonparent");
        skip |= ValidateObject(commandBuffer, dstImage, kVulkanObjectTypeImage, false, "VUID-vkCmdBlitImage-dstImage-parameter", "VUID-vkCmdBlitImage-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);

}

VKAPI_ATTR void VKAPI_CALL CmdCopyBufferToImage(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    srcBuffer,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdCopyBufferToImage-commandBuffer-parameter", "VUID-vkCmdCopyBufferToImage-commonparent");
        skip |= ValidateObject(commandBuffer, srcBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdCopyBufferToImage-srcBuffer-parameter", "VUID-vkCmdCopyBufferToImage-commonparent");
        skip |= ValidateObject(commandBuffer, dstImage, kVulkanObjectTypeImage, false, "VUID-vkCmdCopyBufferToImage-dstImage-parameter", "VUID-vkCmdCopyBufferToImage-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);

}

VKAPI_ATTR void VKAPI_CALL CmdCopyImageToBuffer(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkBuffer                                    dstBuffer,
    uint32_t                                    regionCount,
    const VkBufferImageCopy*                    pRegions)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdCopyImageToBuffer-commandBuffer-parameter", "VUID-vkCmdCopyImageToBuffer-commonparent");
        skip |= ValidateObject(commandBuffer, srcImage, kVulkanObjectTypeImage, false, "VUID-vkCmdCopyImageToBuffer-srcImage-parameter", "VUID-vkCmdCopyImageToBuffer-commonparent");
        skip |= ValidateObject(commandBuffer, dstBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdCopyImageToBuffer-dstBuffer-parameter", "VUID-vkCmdCopyImageToBuffer-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);

}

VKAPI_ATTR void VKAPI_CALL CmdUpdateBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const void*                                 pData)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdUpdateBuffer-commandBuffer-parameter", "VUID-vkCmdUpdateBuffer-commonparent");
        skip |= ValidateObject(commandBuffer, dstBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdUpdateBuffer-dstBuffer-parameter", "VUID-vkCmdUpdateBuffer-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);

}

VKAPI_ATTR void VKAPI_CALL CmdFillBuffer(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdFillBuffer-commandBuffer-parameter", "VUID-vkCmdFillBuffer-commonparent");
        skip |= ValidateObject(commandBuffer, dstBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdFillBuffer-dstBuffer-parameter", "VUID-vkCmdFillBuffer-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);

}

VKAPI_ATTR void VKAPI_CALL CmdClearColorImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearColorValue*                    pColor,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdClearColorImage-commandBuffer-parameter", "VUID-vkCmdClearColorImage-commonparent");
        skip |= ValidateObject(commandBuffer, image, kVulkanObjectTypeImage, false, "VUID-vkCmdClearColorImage-image-parameter", "VUID-vkCmdClearColorImage-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);

}

VKAPI_ATTR void VKAPI_CALL CmdClearDepthStencilImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     image,
    VkImageLayout                               imageLayout,
    const VkClearDepthStencilValue*             pDepthStencil,
    uint32_t                                    rangeCount,
    const VkImageSubresourceRange*              pRanges)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdClearDepthStencilImage-commandBuffer-parameter", "VUID-vkCmdClearDepthStencilImage-commonparent");
        skip |= ValidateObject(commandBuffer, image, kVulkanObjectTypeImage, false, "VUID-vkCmdClearDepthStencilImage-image-parameter", "VUID-vkCmdClearDepthStencilImage-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);

}

VKAPI_ATTR void VKAPI_CALL CmdClearAttachments(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    attachmentCount,
    const VkClearAttachment*                    pAttachments,
    uint32_t                                    rectCount,
    const VkClearRect*                          pRects)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdClearAttachments-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);

}

VKAPI_ATTR void VKAPI_CALL CmdResolveImage(
    VkCommandBuffer                             commandBuffer,
    VkImage                                     srcImage,
    VkImageLayout                               srcImageLayout,
    VkImage                                     dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const VkImageResolve*                       pRegions)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdResolveImage-commandBuffer-parameter", "VUID-vkCmdResolveImage-commonparent");
        skip |= ValidateObject(commandBuffer, srcImage, kVulkanObjectTypeImage, false, "VUID-vkCmdResolveImage-srcImage-parameter", "VUID-vkCmdResolveImage-commonparent");
        skip |= ValidateObject(commandBuffer, dstImage, kVulkanObjectTypeImage, false, "VUID-vkCmdResolveImage-dstImage-parameter", "VUID-vkCmdResolveImage-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);

}

VKAPI_ATTR void VKAPI_CALL CmdSetEvent(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetEvent-commandBuffer-parameter", "VUID-vkCmdSetEvent-commonparent");
        skip |= ValidateObject(commandBuffer, event, kVulkanObjectTypeEvent, false, "VUID-vkCmdSetEvent-event-parameter", "VUID-vkCmdSetEvent-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetEvent(commandBuffer, event, stageMask);

}

VKAPI_ATTR void VKAPI_CALL CmdResetEvent(
    VkCommandBuffer                             commandBuffer,
    VkEvent                                     event,
    VkPipelineStageFlags                        stageMask)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdResetEvent-commandBuffer-parameter", "VUID-vkCmdResetEvent-commonparent");
        skip |= ValidateObject(commandBuffer, event, kVulkanObjectTypeEvent, false, "VUID-vkCmdResetEvent-event-parameter", "VUID-vkCmdResetEvent-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdResetEvent(commandBuffer, event, stageMask);

}

VKAPI_ATTR void VKAPI_CALL CmdWaitEvents(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    eventCount,
    const VkEvent*                              pEvents,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    uint32_t                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdWaitEvents-commandBuffer-parameter", "VUID-vkCmdWaitEvents-commonparent");
        for (uint32_t index0 = 0; index0 < eventCount; ++index0) {
            skip |= ValidateObject(commandBuffer, pEvents[index0], kVulkanObjectTypeEvent, false, "VUID-vkCmdWaitEvents-pEvents-parameter", "VUID-vkCmdWaitEvents-commonparent");
        }
        if (pBufferMemoryBarriers) {
            for (uint32_t index0 = 0; index0 < bufferMemoryBarrierCount; ++index0) {
                skip |= ValidateObject(commandBuffer, pBufferMemoryBarriers[index0].buffer, kVulkanObjectTypeBuffer, false, "VUID-VkBufferMemoryBarrier-buffer-parameter", kVUIDUndefined);
            }
        }
        if (pImageMemoryBarriers) {
            for (uint32_t index0 = 0; index0 < imageMemoryBarrierCount; ++index0) {
                skip |= ValidateObject(commandBuffer, pImageMemoryBarriers[index0].image, kVulkanObjectTypeImage, false, "VUID-VkImageMemoryBarrier-image-parameter", kVUIDUndefined);
            }
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);

}

VKAPI_ATTR void VKAPI_CALL CmdPipelineBarrier(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    VkDependencyFlags                           dependencyFlags,
    uint32_t                                    memoryBarrierCount,
    const VkMemoryBarrier*                      pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const VkImageMemoryBarrier*                 pImageMemoryBarriers)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdPipelineBarrier-commandBuffer-parameter", kVUIDUndefined);
        if (pBufferMemoryBarriers) {
            for (uint32_t index0 = 0; index0 < bufferMemoryBarrierCount; ++index0) {
                skip |= ValidateObject(commandBuffer, pBufferMemoryBarriers[index0].buffer, kVulkanObjectTypeBuffer, false, "VUID-VkBufferMemoryBarrier-buffer-parameter", kVUIDUndefined);
            }
        }
        if (pImageMemoryBarriers) {
            for (uint32_t index0 = 0; index0 < imageMemoryBarrierCount; ++index0) {
                skip |= ValidateObject(commandBuffer, pImageMemoryBarriers[index0].image, kVulkanObjectTypeImage, false, "VUID-VkImageMemoryBarrier-image-parameter", kVUIDUndefined);
            }
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);

}

VKAPI_ATTR void VKAPI_CALL CmdBeginQuery(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBeginQuery-commandBuffer-parameter", "VUID-vkCmdBeginQuery-commonparent");
        skip |= ValidateObject(commandBuffer, queryPool, kVulkanObjectTypeQueryPool, false, "VUID-vkCmdBeginQuery-queryPool-parameter", "VUID-vkCmdBeginQuery-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBeginQuery(commandBuffer, queryPool, query, flags);

}

VKAPI_ATTR void VKAPI_CALL CmdEndQuery(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdEndQuery-commandBuffer-parameter", "VUID-vkCmdEndQuery-commonparent");
        skip |= ValidateObject(commandBuffer, queryPool, kVulkanObjectTypeQueryPool, false, "VUID-vkCmdEndQuery-queryPool-parameter", "VUID-vkCmdEndQuery-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdEndQuery(commandBuffer, queryPool, query);

}

VKAPI_ATTR void VKAPI_CALL CmdResetQueryPool(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdResetQueryPool-commandBuffer-parameter", "VUID-vkCmdResetQueryPool-commonparent");
        skip |= ValidateObject(commandBuffer, queryPool, kVulkanObjectTypeQueryPool, false, "VUID-vkCmdResetQueryPool-queryPool-parameter", "VUID-vkCmdResetQueryPool-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);

}

VKAPI_ATTR void VKAPI_CALL CmdWriteTimestamp(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    VkQueryPool                                 queryPool,
    uint32_t                                    query)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdWriteTimestamp-commandBuffer-parameter", "VUID-vkCmdWriteTimestamp-commonparent");
        skip |= ValidateObject(commandBuffer, queryPool, kVulkanObjectTypeQueryPool, false, "VUID-vkCmdWriteTimestamp-queryPool-parameter", "VUID-vkCmdWriteTimestamp-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);

}

VKAPI_ATTR void VKAPI_CALL CmdCopyQueryPoolResults(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdCopyQueryPoolResults-commandBuffer-parameter", "VUID-vkCmdCopyQueryPoolResults-commonparent");
        skip |= ValidateObject(commandBuffer, queryPool, kVulkanObjectTypeQueryPool, false, "VUID-vkCmdCopyQueryPoolResults-queryPool-parameter", "VUID-vkCmdCopyQueryPoolResults-commonparent");
        skip |= ValidateObject(commandBuffer, dstBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdCopyQueryPoolResults-dstBuffer-parameter", "VUID-vkCmdCopyQueryPoolResults-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);

}

VKAPI_ATTR void VKAPI_CALL CmdPushConstants(
    VkCommandBuffer                             commandBuffer,
    VkPipelineLayout                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const void*                                 pValues)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdPushConstants-commandBuffer-parameter", "VUID-vkCmdPushConstants-commonparent");
        skip |= ValidateObject(commandBuffer, layout, kVulkanObjectTypePipelineLayout, false, "VUID-vkCmdPushConstants-layout-parameter", "VUID-vkCmdPushConstants-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);

}

VKAPI_ATTR void VKAPI_CALL CmdBeginRenderPass(
    VkCommandBuffer                             commandBuffer,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    VkSubpassContents                           contents)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBeginRenderPass-commandBuffer-parameter", kVUIDUndefined);
        if (pRenderPassBegin) {
            skip |= ValidateObject(commandBuffer, pRenderPassBegin->renderPass, kVulkanObjectTypeRenderPass, false, "VUID-VkRenderPassBeginInfo-renderPass-parameter", "VUID-VkRenderPassBeginInfo-commonparent");
            skip |= ValidateObject(commandBuffer, pRenderPassBegin->framebuffer, kVulkanObjectTypeFramebuffer, false, "VUID-VkRenderPassBeginInfo-framebuffer-parameter", "VUID-VkRenderPassBeginInfo-commonparent");
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);

}

VKAPI_ATTR void VKAPI_CALL CmdNextSubpass(
    VkCommandBuffer                             commandBuffer,
    VkSubpassContents                           contents)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdNextSubpass-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdNextSubpass(commandBuffer, contents);

}

VKAPI_ATTR void VKAPI_CALL CmdEndRenderPass(
    VkCommandBuffer                             commandBuffer)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdEndRenderPass-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdEndRenderPass(commandBuffer);

}

VKAPI_ATTR void VKAPI_CALL CmdExecuteCommands(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    commandBufferCount,
    const VkCommandBuffer*                      pCommandBuffers)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdExecuteCommands-commandBuffer-parameter", "VUID-vkCmdExecuteCommands-commonparent");
        for (uint32_t index0 = 0; index0 < commandBufferCount; ++index0) {
            skip |= ValidateObject(commandBuffer, pCommandBuffers[index0], kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdExecuteCommands-pCommandBuffers-parameter", "VUID-vkCmdExecuteCommands-commonparent");
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);

}

VKAPI_ATTR VkResult VKAPI_CALL BindBufferMemory2(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindBufferMemoryInfo*               pBindInfos)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkBindBufferMemory2-device-parameter", kVUIDUndefined);
        if (pBindInfos) {
            for (uint32_t index0 = 0; index0 < bindInfoCount; ++index0) {
                skip |= ValidateObject(device, pBindInfos[index0].buffer, kVulkanObjectTypeBuffer, false, "VUID-VkBindBufferMemoryInfo-buffer-parameter", "VUID-VkBindBufferMemoryInfo-commonparent");
                skip |= ValidateObject(device, pBindInfos[index0].memory, kVulkanObjectTypeDeviceMemory, false, "VUID-VkBindBufferMemoryInfo-memory-parameter", "VUID-VkBindBufferMemoryInfo-commonparent");
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.BindBufferMemory2(device, bindInfoCount, pBindInfos);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL BindImageMemory2(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindImageMemoryInfo*                pBindInfos)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkBindImageMemory2-device-parameter", kVUIDUndefined);
        if (pBindInfos) {
            for (uint32_t index0 = 0; index0 < bindInfoCount; ++index0) {
                skip |= ValidateObject(device, pBindInfos[index0].image, kVulkanObjectTypeImage, false, "VUID-VkBindImageMemoryInfo-image-parameter", "VUID-VkBindImageMemoryInfo-commonparent");
                skip |= ValidateObject(device, pBindInfos[index0].memory, kVulkanObjectTypeDeviceMemory, true, kVUIDUndefined, "VUID-VkBindImageMemoryInfo-commonparent");
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.BindImageMemory2(device, bindInfoCount, pBindInfos);

    return result;
}

VKAPI_ATTR void VKAPI_CALL GetDeviceGroupPeerMemoryFeatures(
    VkDevice                                    device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    VkPeerMemoryFeatureFlags*                   pPeerMemoryFeatures)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetDeviceGroupPeerMemoryFeatures-device-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);

}

VKAPI_ATTR void VKAPI_CALL CmdSetDeviceMask(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    deviceMask)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetDeviceMask-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetDeviceMask(commandBuffer, deviceMask);

}

VKAPI_ATTR void VKAPI_CALL CmdDispatchBase(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDispatchBase-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);

}

VKAPI_ATTR VkResult VKAPI_CALL EnumeratePhysicalDeviceGroups(
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupProperties*            pPhysicalDeviceGroupProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkEnumeratePhysicalDeviceGroups-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.EnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);

    return result;
}

VKAPI_ATTR void VKAPI_CALL GetImageMemoryRequirements2(
    VkDevice                                    device,
    const VkImageMemoryRequirementsInfo2*       pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetImageMemoryRequirements2-device-parameter", kVUIDUndefined);
        if (pInfo) {
            skip |= ValidateObject(device, pInfo->image, kVulkanObjectTypeImage, false, "VUID-VkImageMemoryRequirementsInfo2-image-parameter", kVUIDUndefined);
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetImageMemoryRequirements2(device, pInfo, pMemoryRequirements);

}

VKAPI_ATTR void VKAPI_CALL GetBufferMemoryRequirements2(
    VkDevice                                    device,
    const VkBufferMemoryRequirementsInfo2*      pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetBufferMemoryRequirements2-device-parameter", kVUIDUndefined);
        if (pInfo) {
            skip |= ValidateObject(device, pInfo->buffer, kVulkanObjectTypeBuffer, false, "VUID-VkBufferMemoryRequirementsInfo2-buffer-parameter", kVUIDUndefined);
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements);

}

VKAPI_ATTR void VKAPI_CALL GetImageSparseMemoryRequirements2(
    VkDevice                                    device,
    const VkImageSparseMemoryRequirementsInfo2* pInfo,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2*           pSparseMemoryRequirements)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetImageSparseMemoryRequirements2-device-parameter", kVUIDUndefined);
        if (pInfo) {
            skip |= ValidateObject(device, pInfo->image, kVulkanObjectTypeImage, false, "VUID-VkImageSparseMemoryRequirementsInfo2-image-parameter", kVUIDUndefined);
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFeatures2(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures2*                  pFeatures)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceFeatures2-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceFeatures2(physicalDevice, pFeatures);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceProperties2(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties2*                pProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceProperties2-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceProperties2(physicalDevice, pProperties);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFormatProperties2(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties2*                        pFormatProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceFormatProperties2-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties);

}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceImageFormatProperties2(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceImageFormatInfo2*     pImageFormatInfo,
    VkImageFormatProperties2*                   pImageFormatProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceImageFormatProperties2-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties);

    return result;
}

// Declare only
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceQueueFamilyProperties2(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2*                   pQueueFamilyProperties);

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceMemoryProperties2(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties2*          pMemoryProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceMemoryProperties2-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceSparseImageFormatProperties2(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties2*             pProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceSparseImageFormatProperties2-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties);

}

VKAPI_ATTR void VKAPI_CALL TrimCommandPool(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkTrimCommandPool-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, commandPool, kVulkanObjectTypeCommandPool, false, "VUID-vkTrimCommandPool-commandPool-parameter", "VUID-vkTrimCommandPool-commandPool-parent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.TrimCommandPool(device, commandPool, flags);

}

// Declare only
VKAPI_ATTR void VKAPI_CALL GetDeviceQueue2(
    VkDevice                                    device,
    const VkDeviceQueueInfo2*                   pQueueInfo,
    VkQueue*                                    pQueue);

VKAPI_ATTR VkResult VKAPI_CALL CreateSamplerYcbcrConversion(
    VkDevice                                    device,
    const VkSamplerYcbcrConversionCreateInfo*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSamplerYcbcrConversion*                   pYcbcrConversion)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateSamplerYcbcrConversion-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pYcbcrConversion, kVulkanObjectTypeSamplerYcbcrConversion, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroySamplerYcbcrConversion(
    VkDevice                                    device,
    VkSamplerYcbcrConversion                    ycbcrConversion,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroySamplerYcbcrConversion-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, ycbcrConversion, kVulkanObjectTypeSamplerYcbcrConversion, true, "VUID-vkDestroySamplerYcbcrConversion-ycbcrConversion-parameter", "VUID-vkDestroySamplerYcbcrConversion-ycbcrConversion-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, ycbcrConversion, kVulkanObjectTypeSamplerYcbcrConversion, pAllocator, kVUIDUndefined, kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorUpdateTemplate(
    VkDevice                                    device,
    const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorUpdateTemplate*                 pDescriptorUpdateTemplate)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateDescriptorUpdateTemplate-device-parameter", kVUIDUndefined);
        if (pCreateInfo) {
            skip |= ValidateObject(device, pCreateInfo->descriptorSetLayout, kVulkanObjectTypeDescriptorSetLayout, true, "VUID-VkDescriptorUpdateTemplateCreateInfo-descriptorSetLayout-parameter", "VUID-VkDescriptorUpdateTemplateCreateInfo-commonparent");
            skip |= ValidateObject(device, pCreateInfo->pipelineLayout, kVulkanObjectTypePipelineLayout, true, kVUIDUndefined, "VUID-VkDescriptorUpdateTemplateCreateInfo-commonparent");
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pDescriptorUpdateTemplate, kVulkanObjectTypeDescriptorUpdateTemplate, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyDescriptorUpdateTemplate(
    VkDevice                                    device,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyDescriptorUpdateTemplate-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, descriptorUpdateTemplate, kVulkanObjectTypeDescriptorUpdateTemplate, true, "VUID-vkDestroyDescriptorUpdateTemplate-descriptorUpdateTemplate-parameter", "VUID-vkDestroyDescriptorUpdateTemplate-descriptorUpdateTemplate-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, descriptorUpdateTemplate, kVulkanObjectTypeDescriptorUpdateTemplate, pAllocator, "VUID-vkDestroyDescriptorUpdateTemplate-descriptorSetLayout-00356", "VUID-vkDestroyDescriptorUpdateTemplate-descriptorSetLayout-00357");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator);

}

VKAPI_ATTR void VKAPI_CALL UpdateDescriptorSetWithTemplate(
    VkDevice                                    device,
    VkDescriptorSet                             descriptorSet,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const void*                                 pData)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkUpdateDescriptorSetWithTemplate-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, descriptorSet, kVulkanObjectTypeDescriptorSet, false, "VUID-vkUpdateDescriptorSetWithTemplate-descriptorSet-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, descriptorUpdateTemplate, kVulkanObjectTypeDescriptorUpdateTemplate, false, "VUID-vkUpdateDescriptorSetWithTemplate-descriptorUpdateTemplate-parameter", "VUID-vkUpdateDescriptorSetWithTemplate-descriptorUpdateTemplate-parent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.UpdateDescriptorSetWithTemplate(device, descriptorSet, descriptorUpdateTemplate, pData);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceExternalBufferProperties(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalBufferInfo*   pExternalBufferInfo,
    VkExternalBufferProperties*                 pExternalBufferProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceExternalBufferProperties-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceExternalFenceProperties(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalFenceInfo*    pExternalFenceInfo,
    VkExternalFenceProperties*                  pExternalFenceProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceExternalFenceProperties-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceExternalSemaphoreProperties(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties*              pExternalSemaphoreProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceExternalSemaphoreProperties-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);

}

// Declare only
VKAPI_ATTR void VKAPI_CALL GetDescriptorSetLayoutSupport(
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    VkDescriptorSetLayoutSupport*               pSupport);

VKAPI_ATTR void VKAPI_CALL DestroySurfaceKHR(
    VkInstance                                  instance,
    VkSurfaceKHR                                surface,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkDestroySurfaceKHR-instance-parameter", kVUIDUndefined);
        skip |= ValidateObject(instance, surface, kVulkanObjectTypeSurfaceKHR, true, "VUID-vkDestroySurfaceKHR-surface-parameter", "VUID-vkDestroySurfaceKHR-surface-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(instance, surface, kVulkanObjectTypeSurfaceKHR, pAllocator, "VUID-vkDestroySurfaceKHR-surface-01267", "VUID-vkDestroySurfaceKHR-surface-01268");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.DestroySurfaceKHR(instance, surface, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    VkSurfaceKHR                                surface,
    VkBool32*                                   pSupported)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceSurfaceSupportKHR-physicalDevice-parameter", "VUID-vkGetPhysicalDeviceSurfaceSupportKHR-commonparent");
        skip |= ValidateObject(physicalDevice, surface, kVulkanObjectTypeSurfaceKHR, false, "VUID-vkGetPhysicalDeviceSurfaceSupportKHR-surface-parameter", "VUID-vkGetPhysicalDeviceSurfaceSupportKHR-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilitiesKHR*                   pSurfaceCapabilities)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceSurfaceCapabilitiesKHR-physicalDevice-parameter", "VUID-vkGetPhysicalDeviceSurfaceCapabilitiesKHR-commonparent");
        skip |= ValidateObject(physicalDevice, surface, kVulkanObjectTypeSurfaceKHR, false, "VUID-vkGetPhysicalDeviceSurfaceCapabilitiesKHR-surface-parameter", "VUID-vkGetPhysicalDeviceSurfaceCapabilitiesKHR-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceFormatsKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pSurfaceFormatCount,
    VkSurfaceFormatKHR*                         pSurfaceFormats)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceSurfaceFormatsKHR-physicalDevice-parameter", "VUID-vkGetPhysicalDeviceSurfaceFormatsKHR-commonparent");
        skip |= ValidateObject(physicalDevice, surface, kVulkanObjectTypeSurfaceKHR, false, "VUID-vkGetPhysicalDeviceSurfaceFormatsKHR-surface-parameter", "VUID-vkGetPhysicalDeviceSurfaceFormatsKHR-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfacePresentModesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pPresentModeCount,
    VkPresentModeKHR*                           pPresentModes)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceSurfacePresentModesKHR-physicalDevice-parameter", "VUID-vkGetPhysicalDeviceSurfacePresentModesKHR-commonparent");
        skip |= ValidateObject(physicalDevice, surface, kVulkanObjectTypeSurfaceKHR, false, "VUID-vkGetPhysicalDeviceSurfacePresentModesKHR-surface-parameter", "VUID-vkGetPhysicalDeviceSurfacePresentModesKHR-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateSwapchainKHR(
    VkDevice                                    device,
    const VkSwapchainCreateInfoKHR*             pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchain)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateSwapchainKHR-device-parameter", kVUIDUndefined);
        if (pCreateInfo) {
            skip |= ValidateObject(device, pCreateInfo->surface, kVulkanObjectTypeSurfaceKHR, false, "VUID-VkSwapchainCreateInfoKHR-surface-parameter", "VUID-VkSwapchainCreateInfoKHR-commonparent");
            skip |= ValidateObject(device, pCreateInfo->oldSwapchain, kVulkanObjectTypeSwapchainKHR, true, "VUID-VkSwapchainCreateInfoKHR-oldSwapchain-parameter", "VUID-VkSwapchainCreateInfoKHR-oldSwapchain-parent");
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pSwapchain, kVulkanObjectTypeSwapchainKHR, pAllocator);
    }
    return result;
}

// Declare only
VKAPI_ATTR void VKAPI_CALL DestroySwapchainKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    const VkAllocationCallbacks*                pAllocator);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL GetSwapchainImagesKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    uint32_t*                                   pSwapchainImageCount,
    VkImage*                                    pSwapchainImages);

VKAPI_ATTR VkResult VKAPI_CALL AcquireNextImageKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    uint64_t                                    timeout,
    VkSemaphore                                 semaphore,
    VkFence                                     fence,
    uint32_t*                                   pImageIndex)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkAcquireNextImageKHR-device-parameter", "VUID-vkAcquireNextImageKHR-commonparent");
        skip |= ValidateObject(device, swapchain, kVulkanObjectTypeSwapchainKHR, false, "VUID-vkAcquireNextImageKHR-swapchain-parameter", "VUID-vkAcquireNextImageKHR-commonparent");
        skip |= ValidateObject(device, semaphore, kVulkanObjectTypeSemaphore, true, "VUID-vkAcquireNextImageKHR-semaphore-parameter", "VUID-vkAcquireNextImageKHR-semaphore-parent");
        skip |= ValidateObject(device, fence, kVulkanObjectTypeFence, true, "VUID-vkAcquireNextImageKHR-fence-parameter", "VUID-vkAcquireNextImageKHR-fence-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.AcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL QueuePresentKHR(
    VkQueue                                     queue,
    const VkPresentInfoKHR*                     pPresentInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(queue, queue, kVulkanObjectTypeQueue, false, "VUID-vkQueuePresentKHR-queue-parameter", kVUIDUndefined);
        if (pPresentInfo) {
            for (uint32_t index1 = 0; index1 < pPresentInfo->waitSemaphoreCount; ++index1) {
                skip |= ValidateObject(queue, pPresentInfo->pWaitSemaphores[index1], kVulkanObjectTypeSemaphore, false, "VUID-VkPresentInfoKHR-pWaitSemaphores-parameter", "VUID-VkPresentInfoKHR-commonparent");
            }
            for (uint32_t index1 = 0; index1 < pPresentInfo->swapchainCount; ++index1) {
                skip |= ValidateObject(queue, pPresentInfo->pSwapchains[index1], kVulkanObjectTypeSwapchainKHR, false, "VUID-VkPresentInfoKHR-pSwapchains-parameter", "VUID-VkPresentInfoKHR-commonparent");
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(queue), layer_data_map)->device_dispatch_table.QueuePresentKHR(queue, pPresentInfo);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetDeviceGroupPresentCapabilitiesKHR(
    VkDevice                                    device,
    VkDeviceGroupPresentCapabilitiesKHR*        pDeviceGroupPresentCapabilities)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetDeviceGroupPresentCapabilitiesKHR-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetDeviceGroupSurfacePresentModesKHR(
    VkDevice                                    device,
    VkSurfaceKHR                                surface,
    VkDeviceGroupPresentModeFlagsKHR*           pModes)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetDeviceGroupSurfacePresentModesKHR-device-parameter", "VUID-vkGetDeviceGroupSurfacePresentModesKHR-commonparent");
        skip |= ValidateObject(device, surface, kVulkanObjectTypeSurfaceKHR, false, "VUID-vkGetDeviceGroupSurfacePresentModesKHR-surface-parameter", "VUID-vkGetDeviceGroupSurfacePresentModesKHR-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetDeviceGroupSurfacePresentModesKHR(device, surface, pModes);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDevicePresentRectanglesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    uint32_t*                                   pRectCount,
    VkRect2D*                                   pRects)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDevicePresentRectanglesKHR-physicalDevice-parameter", "VUID-vkGetPhysicalDevicePresentRectanglesKHR-commonparent");
        skip |= ValidateObject(physicalDevice, surface, kVulkanObjectTypeSurfaceKHR, false, "VUID-vkGetPhysicalDevicePresentRectanglesKHR-surface-parameter", "VUID-vkGetPhysicalDevicePresentRectanglesKHR-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL AcquireNextImage2KHR(
    VkDevice                                    device,
    const VkAcquireNextImageInfoKHR*            pAcquireInfo,
    uint32_t*                                   pImageIndex)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkAcquireNextImage2KHR-device-parameter", kVUIDUndefined);
        if (pAcquireInfo) {
            skip |= ValidateObject(device, pAcquireInfo->swapchain, kVulkanObjectTypeSwapchainKHR, false, "VUID-VkAcquireNextImageInfoKHR-swapchain-parameter", "VUID-VkAcquireNextImageInfoKHR-commonparent");
            skip |= ValidateObject(device, pAcquireInfo->semaphore, kVulkanObjectTypeSemaphore, true, "VUID-VkAcquireNextImageInfoKHR-semaphore-parameter", "VUID-VkAcquireNextImageInfoKHR-commonparent");
            skip |= ValidateObject(device, pAcquireInfo->fence, kVulkanObjectTypeFence, true, "VUID-VkAcquireNextImageInfoKHR-fence-parameter", "VUID-VkAcquireNextImageInfoKHR-commonparent");
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.AcquireNextImage2KHR(device, pAcquireInfo, pImageIndex);

    return result;
}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceDisplayPropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayPropertiesKHR*                     pProperties);

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayPlanePropertiesKHR*                pProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceDisplayPlanePropertiesKHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);

    return result;
}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL GetDisplayPlaneSupportedDisplaysKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    planeIndex,
    uint32_t*                                   pDisplayCount,
    VkDisplayKHR*                               pDisplays);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL GetDisplayModePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    uint32_t*                                   pPropertyCount,
    VkDisplayModePropertiesKHR*                 pProperties);

VKAPI_ATTR VkResult VKAPI_CALL CreateDisplayModeKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    const VkDisplayModeCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDisplayModeKHR*                           pMode)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkCreateDisplayModeKHR-physicalDevice-parameter", kVUIDUndefined);
        skip |= ValidateObject(physicalDevice, display, kVulkanObjectTypeDisplayKHR, false, "VUID-vkCreateDisplayModeKHR-display-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.CreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(physicalDevice, *pMode, kVulkanObjectTypeDisplayModeKHR, pAllocator);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetDisplayPlaneCapabilitiesKHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayModeKHR                            mode,
    uint32_t                                    planeIndex,
    VkDisplayPlaneCapabilitiesKHR*              pCapabilities)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetDisplayPlaneCapabilitiesKHR-physicalDevice-parameter", kVUIDUndefined);
        skip |= ValidateObject(physicalDevice, mode, kVulkanObjectTypeDisplayModeKHR, false, "VUID-vkGetDisplayPlaneCapabilitiesKHR-mode-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateDisplayPlaneSurfaceKHR(
    VkInstance                                  instance,
    const VkDisplaySurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkCreateDisplayPlaneSurfaceKHR-instance-parameter", kVUIDUndefined);
        if (pCreateInfo) {
            skip |= ValidateObject(instance, pCreateInfo->displayMode, kVulkanObjectTypeDisplayModeKHR, false, "VUID-VkDisplaySurfaceCreateInfoKHR-displayMode-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.CreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(instance, *pSurface, kVulkanObjectTypeSurfaceKHR, pAllocator);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateSharedSwapchainsKHR(
    VkDevice                                    device,
    uint32_t                                    swapchainCount,
    const VkSwapchainCreateInfoKHR*             pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkSwapchainKHR*                             pSwapchains)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateSharedSwapchainsKHR-device-parameter", kVUIDUndefined);
        if (pCreateInfos) {
            for (uint32_t index0 = 0; index0 < swapchainCount; ++index0) {
                skip |= ValidateObject(device, pCreateInfos[index0].surface, kVulkanObjectTypeSurfaceKHR, false, "VUID-VkSwapchainCreateInfoKHR-surface-parameter", "VUID-VkSwapchainCreateInfoKHR-commonparent");
                skip |= ValidateObject(device, pCreateInfos[index0].oldSwapchain, kVulkanObjectTypeSwapchainKHR, true, "VUID-VkSwapchainCreateInfoKHR-oldSwapchain-parameter", "VUID-VkSwapchainCreateInfoKHR-oldSwapchain-parent");
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        for (uint32_t index = 0; index < swapchainCount; index++) {
            CreateObject(device, pSwapchains[index], kVulkanObjectTypeSwapchainKHR, pAllocator);
        }
    }
    return result;
}

#ifdef VK_USE_PLATFORM_XLIB_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateXlibSurfaceKHR(
    VkInstance                                  instance,
    const VkXlibSurfaceCreateInfoKHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkCreateXlibSurfaceKHR-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.CreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(instance, *pSurface, kVulkanObjectTypeSurfaceKHR, pAllocator);
    }
    return result;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR

VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceXlibPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    Display*                                    dpy,
    VisualID                                    visualID)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceXlibPresentationSupportKHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_FALSE;
    VkBool32 result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID);

    return result;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateXcbSurfaceKHR(
    VkInstance                                  instance,
    const VkXcbSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkCreateXcbSurfaceKHR-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.CreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(instance, *pSurface, kVulkanObjectTypeSurfaceKHR, pAllocator);
    }
    return result;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR

VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceXcbPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    xcb_connection_t*                           connection,
    xcb_visualid_t                              visual_id)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceXcbPresentationSupportKHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_FALSE;
    VkBool32 result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id);

    return result;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateWaylandSurfaceKHR(
    VkInstance                                  instance,
    const VkWaylandSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkCreateWaylandSurfaceKHR-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.CreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(instance, *pSurface, kVulkanObjectTypeSurfaceKHR, pAllocator);
    }
    return result;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR

VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceWaylandPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    struct wl_display*                          display)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceWaylandPresentationSupportKHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_FALSE;
    VkBool32 result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display);

    return result;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_MIR_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateMirSurfaceKHR(
    VkInstance                                  instance,
    const VkMirSurfaceCreateInfoKHR*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkCreateMirSurfaceKHR-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.CreateMirSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(instance, *pSurface, kVulkanObjectTypeSurfaceKHR, pAllocator);
    }
    return result;
}
#endif // VK_USE_PLATFORM_MIR_KHR

#ifdef VK_USE_PLATFORM_MIR_KHR

VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceMirPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    MirConnection*                              connection)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceMirPresentationSupportKHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_FALSE;
    VkBool32 result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceMirPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection);

    return result;
}
#endif // VK_USE_PLATFORM_MIR_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateAndroidSurfaceKHR(
    VkInstance                                  instance,
    const VkAndroidSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkCreateAndroidSurfaceKHR-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.CreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(instance, *pSurface, kVulkanObjectTypeSurfaceKHR, pAllocator);
    }
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL CreateWin32SurfaceKHR(
    VkInstance                                  instance,
    const VkWin32SurfaceCreateInfoKHR*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkCreateWin32SurfaceKHR-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.CreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(instance, *pSurface, kVulkanObjectTypeSurfaceKHR, pAllocator);
    }
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkBool32 VKAPI_CALL GetPhysicalDeviceWin32PresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceWin32PresentationSupportKHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_FALSE;
    VkBool32 result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex);

    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFeatures2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceFeatures2*                  pFeatures)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceFeatures2KHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties2*                pProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceProperties2KHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceProperties2KHR(physicalDevice, pProperties);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkFormatProperties2*                        pFormatProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceFormatProperties2KHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties);

}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceImageFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceImageFormatInfo2*     pImageFormatInfo,
    VkImageFormatProperties2*                   pImageFormatProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceImageFormatProperties2KHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties);

    return result;
}

// Declare only
VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceQueueFamilyProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2*                   pQueueFamilyProperties);

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceMemoryProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceMemoryProperties2*          pMemoryProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceMemoryProperties2KHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceSparseImageFormatProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
    uint32_t*                                   pPropertyCount,
    VkSparseImageFormatProperties2*             pProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceSparseImageFormatProperties2KHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties);

}

VKAPI_ATTR void VKAPI_CALL GetDeviceGroupPeerMemoryFeaturesKHR(
    VkDevice                                    device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    VkPeerMemoryFeatureFlags*                   pPeerMemoryFeatures)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetDeviceGroupPeerMemoryFeaturesKHR-device-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetDeviceGroupPeerMemoryFeaturesKHR(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);

}

VKAPI_ATTR void VKAPI_CALL CmdSetDeviceMaskKHR(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    deviceMask)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetDeviceMaskKHR-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetDeviceMaskKHR(commandBuffer, deviceMask);

}

VKAPI_ATTR void VKAPI_CALL CmdDispatchBaseKHR(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDispatchBaseKHR-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);

}

VKAPI_ATTR void VKAPI_CALL TrimCommandPoolKHR(
    VkDevice                                    device,
    VkCommandPool                               commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkTrimCommandPoolKHR-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, commandPool, kVulkanObjectTypeCommandPool, false, "VUID-vkTrimCommandPoolKHR-commandPool-parameter", "VUID-vkTrimCommandPoolKHR-commandPool-parent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.TrimCommandPoolKHR(device, commandPool, flags);

}

VKAPI_ATTR VkResult VKAPI_CALL EnumeratePhysicalDeviceGroupsKHR(
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupProperties*            pPhysicalDeviceGroupProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkEnumeratePhysicalDeviceGroupsKHR-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.EnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);

    return result;
}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceExternalBufferPropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalBufferInfo*   pExternalBufferInfo,
    VkExternalBufferProperties*                 pExternalBufferProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceExternalBufferPropertiesKHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);

}

#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL GetMemoryWin32HandleKHR(
    VkDevice                                    device,
    const VkMemoryGetWin32HandleInfoKHR*        pGetWin32HandleInfo,
    HANDLE*                                     pHandle)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetMemoryWin32HandleKHR-device-parameter", kVUIDUndefined);
        if (pGetWin32HandleInfo) {
            skip |= ValidateObject(device, pGetWin32HandleInfo->memory, kVulkanObjectTypeDeviceMemory, false, "VUID-VkMemoryGetWin32HandleInfoKHR-memory-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetMemoryWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);

    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL GetMemoryWin32HandlePropertiesKHR(
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    HANDLE                                      handle,
    VkMemoryWin32HandlePropertiesKHR*           pMemoryWin32HandleProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetMemoryWin32HandlePropertiesKHR-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetMemoryWin32HandlePropertiesKHR(device, handleType, handle, pMemoryWin32HandleProperties);

    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL GetMemoryFdKHR(
    VkDevice                                    device,
    const VkMemoryGetFdInfoKHR*                 pGetFdInfo,
    int*                                        pFd)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetMemoryFdKHR-device-parameter", kVUIDUndefined);
        if (pGetFdInfo) {
            skip |= ValidateObject(device, pGetFdInfo->memory, kVulkanObjectTypeDeviceMemory, false, "VUID-VkMemoryGetFdInfoKHR-memory-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetMemoryFdKHR(device, pGetFdInfo, pFd);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetMemoryFdPropertiesKHR(
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    VkMemoryFdPropertiesKHR*                    pMemoryFdProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetMemoryFdPropertiesKHR-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties);

    return result;
}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceExternalSemaphorePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties*              pExternalSemaphoreProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceExternalSemaphorePropertiesKHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);

}

#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL ImportSemaphoreWin32HandleKHR(
    VkDevice                                    device,
    const VkImportSemaphoreWin32HandleInfoKHR*  pImportSemaphoreWin32HandleInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkImportSemaphoreWin32HandleKHR-device-parameter", kVUIDUndefined);
        if (pImportSemaphoreWin32HandleInfo) {
            skip |= ValidateObject(device, pImportSemaphoreWin32HandleInfo->semaphore, kVulkanObjectTypeSemaphore, false, "VUID-VkImportSemaphoreWin32HandleInfoKHR-semaphore-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.ImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo);

    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL GetSemaphoreWin32HandleKHR(
    VkDevice                                    device,
    const VkSemaphoreGetWin32HandleInfoKHR*     pGetWin32HandleInfo,
    HANDLE*                                     pHandle)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetSemaphoreWin32HandleKHR-device-parameter", kVUIDUndefined);
        if (pGetWin32HandleInfo) {
            skip |= ValidateObject(device, pGetWin32HandleInfo->semaphore, kVulkanObjectTypeSemaphore, false, "VUID-VkSemaphoreGetWin32HandleInfoKHR-semaphore-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetSemaphoreWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);

    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL ImportSemaphoreFdKHR(
    VkDevice                                    device,
    const VkImportSemaphoreFdInfoKHR*           pImportSemaphoreFdInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkImportSemaphoreFdKHR-device-parameter", kVUIDUndefined);
        if (pImportSemaphoreFdInfo) {
            skip |= ValidateObject(device, pImportSemaphoreFdInfo->semaphore, kVulkanObjectTypeSemaphore, false, "VUID-VkImportSemaphoreFdInfoKHR-semaphore-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.ImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetSemaphoreFdKHR(
    VkDevice                                    device,
    const VkSemaphoreGetFdInfoKHR*              pGetFdInfo,
    int*                                        pFd)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetSemaphoreFdKHR-device-parameter", kVUIDUndefined);
        if (pGetFdInfo) {
            skip |= ValidateObject(device, pGetFdInfo->semaphore, kVulkanObjectTypeSemaphore, false, "VUID-VkSemaphoreGetFdInfoKHR-semaphore-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetSemaphoreFdKHR(device, pGetFdInfo, pFd);

    return result;
}

// Declare only
VKAPI_ATTR void VKAPI_CALL CmdPushDescriptorSetKHR(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet*                 pDescriptorWrites);

VKAPI_ATTR void VKAPI_CALL CmdPushDescriptorSetWithTemplateKHR(
    VkCommandBuffer                             commandBuffer,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    const void*                                 pData)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdPushDescriptorSetWithTemplateKHR-commandBuffer-parameter", "VUID-vkCmdPushDescriptorSetWithTemplateKHR-commonparent");
        skip |= ValidateObject(commandBuffer, descriptorUpdateTemplate, kVulkanObjectTypeDescriptorUpdateTemplate, false, "VUID-vkCmdPushDescriptorSetWithTemplateKHR-descriptorUpdateTemplate-parameter", "VUID-vkCmdPushDescriptorSetWithTemplateKHR-commonparent");
        skip |= ValidateObject(commandBuffer, layout, kVulkanObjectTypePipelineLayout, false, "VUID-vkCmdPushDescriptorSetWithTemplateKHR-layout-parameter", "VUID-vkCmdPushDescriptorSetWithTemplateKHR-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateDescriptorUpdateTemplateKHR(
    VkDevice                                    device,
    const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDescriptorUpdateTemplate*                 pDescriptorUpdateTemplate)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateDescriptorUpdateTemplateKHR-device-parameter", kVUIDUndefined);
        if (pCreateInfo) {
            skip |= ValidateObject(device, pCreateInfo->descriptorSetLayout, kVulkanObjectTypeDescriptorSetLayout, true, "VUID-VkDescriptorUpdateTemplateCreateInfo-descriptorSetLayout-parameter", "VUID-VkDescriptorUpdateTemplateCreateInfo-commonparent");
            skip |= ValidateObject(device, pCreateInfo->pipelineLayout, kVulkanObjectTypePipelineLayout, true, kVUIDUndefined, "VUID-VkDescriptorUpdateTemplateCreateInfo-commonparent");
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pDescriptorUpdateTemplate, kVulkanObjectTypeDescriptorUpdateTemplate, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyDescriptorUpdateTemplateKHR(
    VkDevice                                    device,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyDescriptorUpdateTemplateKHR-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, descriptorUpdateTemplate, kVulkanObjectTypeDescriptorUpdateTemplate, true, "VUID-vkDestroyDescriptorUpdateTemplateKHR-descriptorUpdateTemplate-parameter", "VUID-vkDestroyDescriptorUpdateTemplateKHR-descriptorUpdateTemplate-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, descriptorUpdateTemplate, kVulkanObjectTypeDescriptorUpdateTemplate, pAllocator, "VUID-vkDestroyDescriptorUpdateTemplate-descriptorSetLayout-00356", "VUID-vkDestroyDescriptorUpdateTemplate-descriptorSetLayout-00357");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator);

}

VKAPI_ATTR void VKAPI_CALL UpdateDescriptorSetWithTemplateKHR(
    VkDevice                                    device,
    VkDescriptorSet                             descriptorSet,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    const void*                                 pData)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkUpdateDescriptorSetWithTemplateKHR-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, descriptorSet, kVulkanObjectTypeDescriptorSet, false, "VUID-vkUpdateDescriptorSetWithTemplateKHR-descriptorSet-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, descriptorUpdateTemplate, kVulkanObjectTypeDescriptorUpdateTemplate, false, "VUID-vkUpdateDescriptorSetWithTemplateKHR-descriptorUpdateTemplate-parameter", "VUID-vkUpdateDescriptorSetWithTemplateKHR-descriptorUpdateTemplate-parent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.UpdateDescriptorSetWithTemplateKHR(device, descriptorSet, descriptorUpdateTemplate, pData);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateRenderPass2KHR(
    VkDevice                                    device,
    const VkRenderPassCreateInfo2KHR*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkRenderPass*                               pRenderPass)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateRenderPass2KHR-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pRenderPass, kVulkanObjectTypeRenderPass, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL CmdBeginRenderPass2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkRenderPassBeginInfo*                pRenderPassBegin,
    const VkSubpassBeginInfoKHR*                pSubpassBeginInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBeginRenderPass2KHR-commandBuffer-parameter", kVUIDUndefined);
        if (pRenderPassBegin) {
            skip |= ValidateObject(commandBuffer, pRenderPassBegin->renderPass, kVulkanObjectTypeRenderPass, false, "VUID-VkRenderPassBeginInfo-renderPass-parameter", "VUID-VkRenderPassBeginInfo-commonparent");
            skip |= ValidateObject(commandBuffer, pRenderPassBegin->framebuffer, kVulkanObjectTypeFramebuffer, false, "VUID-VkRenderPassBeginInfo-framebuffer-parameter", "VUID-VkRenderPassBeginInfo-commonparent");
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);

}

VKAPI_ATTR void VKAPI_CALL CmdNextSubpass2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkSubpassBeginInfoKHR*                pSubpassBeginInfo,
    const VkSubpassEndInfoKHR*                  pSubpassEndInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdNextSubpass2KHR-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);

}

VKAPI_ATTR void VKAPI_CALL CmdEndRenderPass2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkSubpassEndInfoKHR*                  pSubpassEndInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdEndRenderPass2KHR-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo);

}

VKAPI_ATTR VkResult VKAPI_CALL GetSwapchainStatusKHR(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetSwapchainStatusKHR-device-parameter", "VUID-vkGetSwapchainStatusKHR-commonparent");
        skip |= ValidateObject(device, swapchain, kVulkanObjectTypeSwapchainKHR, false, "VUID-vkGetSwapchainStatusKHR-swapchain-parameter", "VUID-vkGetSwapchainStatusKHR-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetSwapchainStatusKHR(device, swapchain);

    return result;
}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceExternalFencePropertiesKHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceExternalFenceInfo*    pExternalFenceInfo,
    VkExternalFenceProperties*                  pExternalFenceProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceExternalFencePropertiesKHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);

}

#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL ImportFenceWin32HandleKHR(
    VkDevice                                    device,
    const VkImportFenceWin32HandleInfoKHR*      pImportFenceWin32HandleInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkImportFenceWin32HandleKHR-device-parameter", kVUIDUndefined);
        if (pImportFenceWin32HandleInfo) {
            skip |= ValidateObject(device, pImportFenceWin32HandleInfo->fence, kVulkanObjectTypeFence, false, "VUID-VkImportFenceWin32HandleInfoKHR-fence-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.ImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo);

    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL GetFenceWin32HandleKHR(
    VkDevice                                    device,
    const VkFenceGetWin32HandleInfoKHR*         pGetWin32HandleInfo,
    HANDLE*                                     pHandle)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetFenceWin32HandleKHR-device-parameter", kVUIDUndefined);
        if (pGetWin32HandleInfo) {
            skip |= ValidateObject(device, pGetWin32HandleInfo->fence, kVulkanObjectTypeFence, false, "VUID-VkFenceGetWin32HandleInfoKHR-fence-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetFenceWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);

    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL ImportFenceFdKHR(
    VkDevice                                    device,
    const VkImportFenceFdInfoKHR*               pImportFenceFdInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkImportFenceFdKHR-device-parameter", kVUIDUndefined);
        if (pImportFenceFdInfo) {
            skip |= ValidateObject(device, pImportFenceFdInfo->fence, kVulkanObjectTypeFence, false, "VUID-VkImportFenceFdInfoKHR-fence-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.ImportFenceFdKHR(device, pImportFenceFdInfo);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetFenceFdKHR(
    VkDevice                                    device,
    const VkFenceGetFdInfoKHR*                  pGetFdInfo,
    int*                                        pFd)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetFenceFdKHR-device-parameter", kVUIDUndefined);
        if (pGetFdInfo) {
            skip |= ValidateObject(device, pGetFdInfo->fence, kVulkanObjectTypeFence, false, "VUID-VkFenceGetFdInfoKHR-fence-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetFenceFdKHR(device, pGetFdInfo, pFd);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceCapabilities2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSurfaceInfo2KHR*      pSurfaceInfo,
    VkSurfaceCapabilities2KHR*                  pSurfaceCapabilities)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceSurfaceCapabilities2KHR-physicalDevice-parameter", kVUIDUndefined);
        if (pSurfaceInfo) {
            skip |= ValidateObject(physicalDevice, pSurfaceInfo->surface, kVulkanObjectTypeSurfaceKHR, false, "VUID-VkPhysicalDeviceSurfaceInfo2KHR-surface-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceFormats2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkPhysicalDeviceSurfaceInfo2KHR*      pSurfaceInfo,
    uint32_t*                                   pSurfaceFormatCount,
    VkSurfaceFormat2KHR*                        pSurfaceFormats)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceSurfaceFormats2KHR-physicalDevice-parameter", kVUIDUndefined);
        if (pSurfaceInfo) {
            skip |= ValidateObject(physicalDevice, pSurfaceInfo->surface, kVulkanObjectTypeSurfaceKHR, false, "VUID-VkPhysicalDeviceSurfaceInfo2KHR-surface-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);

    return result;
}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceDisplayProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayProperties2KHR*                    pProperties);

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceDisplayPlaneProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pPropertyCount,
    VkDisplayPlaneProperties2KHR*               pProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceDisplayPlaneProperties2KHR-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties);

    return result;
}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL GetDisplayModeProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display,
    uint32_t*                                   pPropertyCount,
    VkDisplayModeProperties2KHR*                pProperties);

VKAPI_ATTR VkResult VKAPI_CALL GetDisplayPlaneCapabilities2KHR(
    VkPhysicalDevice                            physicalDevice,
    const VkDisplayPlaneInfo2KHR*               pDisplayPlaneInfo,
    VkDisplayPlaneCapabilities2KHR*             pCapabilities)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetDisplayPlaneCapabilities2KHR-physicalDevice-parameter", kVUIDUndefined);
        if (pDisplayPlaneInfo) {
            skip |= ValidateObject(physicalDevice, pDisplayPlaneInfo->mode, kVulkanObjectTypeDisplayModeKHR, false, "VUID-VkDisplayPlaneInfo2KHR-mode-parameter", kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities);

    return result;
}

VKAPI_ATTR void VKAPI_CALL GetImageMemoryRequirements2KHR(
    VkDevice                                    device,
    const VkImageMemoryRequirementsInfo2*       pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetImageMemoryRequirements2KHR-device-parameter", kVUIDUndefined);
        if (pInfo) {
            skip |= ValidateObject(device, pInfo->image, kVulkanObjectTypeImage, false, "VUID-VkImageMemoryRequirementsInfo2-image-parameter", kVUIDUndefined);
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetImageMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);

}

VKAPI_ATTR void VKAPI_CALL GetBufferMemoryRequirements2KHR(
    VkDevice                                    device,
    const VkBufferMemoryRequirementsInfo2*      pInfo,
    VkMemoryRequirements2*                      pMemoryRequirements)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetBufferMemoryRequirements2KHR-device-parameter", kVUIDUndefined);
        if (pInfo) {
            skip |= ValidateObject(device, pInfo->buffer, kVulkanObjectTypeBuffer, false, "VUID-VkBufferMemoryRequirementsInfo2-buffer-parameter", kVUIDUndefined);
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetBufferMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);

}

VKAPI_ATTR void VKAPI_CALL GetImageSparseMemoryRequirements2KHR(
    VkDevice                                    device,
    const VkImageSparseMemoryRequirementsInfo2* pInfo,
    uint32_t*                                   pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2*           pSparseMemoryRequirements)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetImageSparseMemoryRequirements2KHR-device-parameter", kVUIDUndefined);
        if (pInfo) {
            skip |= ValidateObject(device, pInfo->image, kVulkanObjectTypeImage, false, "VUID-VkImageSparseMemoryRequirementsInfo2-image-parameter", kVUIDUndefined);
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetImageSparseMemoryRequirements2KHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateSamplerYcbcrConversionKHR(
    VkDevice                                    device,
    const VkSamplerYcbcrConversionCreateInfo*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSamplerYcbcrConversion*                   pYcbcrConversion)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateSamplerYcbcrConversionKHR-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pYcbcrConversion, kVulkanObjectTypeSamplerYcbcrConversion, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroySamplerYcbcrConversionKHR(
    VkDevice                                    device,
    VkSamplerYcbcrConversion                    ycbcrConversion,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroySamplerYcbcrConversionKHR-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, ycbcrConversion, kVulkanObjectTypeSamplerYcbcrConversion, true, "VUID-vkDestroySamplerYcbcrConversionKHR-ycbcrConversion-parameter", "VUID-vkDestroySamplerYcbcrConversionKHR-ycbcrConversion-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, ycbcrConversion, kVulkanObjectTypeSamplerYcbcrConversion, pAllocator, kVUIDUndefined, kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL BindBufferMemory2KHR(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindBufferMemoryInfo*               pBindInfos)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkBindBufferMemory2KHR-device-parameter", kVUIDUndefined);
        if (pBindInfos) {
            for (uint32_t index0 = 0; index0 < bindInfoCount; ++index0) {
                skip |= ValidateObject(device, pBindInfos[index0].buffer, kVulkanObjectTypeBuffer, false, "VUID-VkBindBufferMemoryInfo-buffer-parameter", "VUID-VkBindBufferMemoryInfo-commonparent");
                skip |= ValidateObject(device, pBindInfos[index0].memory, kVulkanObjectTypeDeviceMemory, false, "VUID-VkBindBufferMemoryInfo-memory-parameter", "VUID-VkBindBufferMemoryInfo-commonparent");
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.BindBufferMemory2KHR(device, bindInfoCount, pBindInfos);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL BindImageMemory2KHR(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindImageMemoryInfo*                pBindInfos)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkBindImageMemory2KHR-device-parameter", kVUIDUndefined);
        if (pBindInfos) {
            for (uint32_t index0 = 0; index0 < bindInfoCount; ++index0) {
                skip |= ValidateObject(device, pBindInfos[index0].image, kVulkanObjectTypeImage, false, "VUID-VkBindImageMemoryInfo-image-parameter", "VUID-VkBindImageMemoryInfo-commonparent");
                skip |= ValidateObject(device, pBindInfos[index0].memory, kVulkanObjectTypeDeviceMemory, true, kVUIDUndefined, "VUID-VkBindImageMemoryInfo-commonparent");
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.BindImageMemory2KHR(device, bindInfoCount, pBindInfos);

    return result;
}

// Declare only
VKAPI_ATTR void VKAPI_CALL GetDescriptorSetLayoutSupportKHR(
    VkDevice                                    device,
    const VkDescriptorSetLayoutCreateInfo*      pCreateInfo,
    VkDescriptorSetLayoutSupport*               pSupport);

VKAPI_ATTR void VKAPI_CALL CmdDrawIndirectCountKHR(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDrawIndirectCountKHR-commandBuffer-parameter", "VUID-vkCmdDrawIndirectCountKHR-commonparent");
        skip |= ValidateObject(commandBuffer, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawIndirectCountKHR-buffer-parameter", "VUID-vkCmdDrawIndirectCountKHR-commonparent");
        skip |= ValidateObject(commandBuffer, countBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawIndirectCountKHR-countBuffer-parameter", "VUID-vkCmdDrawIndirectCountKHR-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);

}

VKAPI_ATTR void VKAPI_CALL CmdDrawIndexedIndirectCountKHR(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDrawIndexedIndirectCountKHR-commandBuffer-parameter", "VUID-vkCmdDrawIndexedIndirectCountKHR-commonparent");
        skip |= ValidateObject(commandBuffer, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawIndexedIndirectCountKHR-buffer-parameter", "VUID-vkCmdDrawIndexedIndirectCountKHR-commonparent");
        skip |= ValidateObject(commandBuffer, countBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawIndexedIndirectCountKHR-countBuffer-parameter", "VUID-vkCmdDrawIndexedIndirectCountKHR-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);

}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateDebugReportCallbackEXT(
    VkInstance                                  instance,
    const VkDebugReportCallbackCreateInfoEXT*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDebugReportCallbackEXT*                   pCallback);

// Declare only
VKAPI_ATTR void VKAPI_CALL DestroyDebugReportCallbackEXT(
    VkInstance                                  instance,
    VkDebugReportCallbackEXT                    callback,
    const VkAllocationCallbacks*                pAllocator);

// Declare only
VKAPI_ATTR void VKAPI_CALL DebugReportMessageEXT(
    VkInstance                                  instance,
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    const char*                                 pLayerPrefix,
    const char*                                 pMessage);

VKAPI_ATTR VkResult VKAPI_CALL DebugMarkerSetObjectTagEXT(
    VkDevice                                    device,
    const VkDebugMarkerObjectTagInfoEXT*        pTagInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDebugMarkerSetObjectTagEXT-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DebugMarkerSetObjectTagEXT(device, pTagInfo);

    return result;
}

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL DebugMarkerSetObjectNameEXT(
    VkDevice                                    device,
    const VkDebugMarkerObjectNameInfoEXT*       pNameInfo);

VKAPI_ATTR void VKAPI_CALL CmdDebugMarkerBeginEXT(
    VkCommandBuffer                             commandBuffer,
    const VkDebugMarkerMarkerInfoEXT*           pMarkerInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDebugMarkerBeginEXT-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);

}

VKAPI_ATTR void VKAPI_CALL CmdDebugMarkerEndEXT(
    VkCommandBuffer                             commandBuffer)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDebugMarkerEndEXT-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDebugMarkerEndEXT(commandBuffer);

}

VKAPI_ATTR void VKAPI_CALL CmdDebugMarkerInsertEXT(
    VkCommandBuffer                             commandBuffer,
    const VkDebugMarkerMarkerInfoEXT*           pMarkerInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDebugMarkerInsertEXT-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);

}

VKAPI_ATTR void VKAPI_CALL CmdBindTransformFeedbackBuffersEXT(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const VkBuffer*                             pBuffers,
    const VkDeviceSize*                         pOffsets,
    const VkDeviceSize*                         pSizes)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBindTransformFeedbackBuffersEXT-commandBuffer-parameter", "VUID-vkCmdBindTransformFeedbackBuffersEXT-commonparent");
        for (uint32_t index0 = 0; index0 < bindingCount; ++index0) {
            skip |= ValidateObject(commandBuffer, pBuffers[index0], kVulkanObjectTypeBuffer, false, "VUID-vkCmdBindTransformFeedbackBuffersEXT-pBuffers-parameter", "VUID-vkCmdBindTransformFeedbackBuffersEXT-commonparent");
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);

}

VKAPI_ATTR void VKAPI_CALL CmdBeginTransformFeedbackEXT(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const VkBuffer*                             pCounterBuffers,
    const VkDeviceSize*                         pCounterBufferOffsets)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBeginTransformFeedbackEXT-commandBuffer-parameter", "VUID-vkCmdBeginTransformFeedbackEXT-commonparent");
        for (uint32_t index0 = 0; index0 < counterBufferCount; ++index0) {
            skip |= ValidateObject(commandBuffer, pCounterBuffers[index0], kVulkanObjectTypeBuffer, true, "VUID-vkCmdBeginTransformFeedbackEXT-pCounterBuffers-parameter", "VUID-vkCmdBeginTransformFeedbackEXT-commonparent");
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);

}

VKAPI_ATTR void VKAPI_CALL CmdEndTransformFeedbackEXT(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    const VkBuffer*                             pCounterBuffers,
    const VkDeviceSize*                         pCounterBufferOffsets)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdEndTransformFeedbackEXT-commandBuffer-parameter", "VUID-vkCmdEndTransformFeedbackEXT-commonparent");
        for (uint32_t index0 = 0; index0 < counterBufferCount; ++index0) {
            skip |= ValidateObject(commandBuffer, pCounterBuffers[index0], kVulkanObjectTypeBuffer, true, "VUID-vkCmdEndTransformFeedbackEXT-pCounterBuffers-parameter", "VUID-vkCmdEndTransformFeedbackEXT-commonparent");
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);

}

VKAPI_ATTR void VKAPI_CALL CmdBeginQueryIndexedEXT(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags,
    uint32_t                                    index)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBeginQueryIndexedEXT-commandBuffer-parameter", "VUID-vkCmdBeginQueryIndexedEXT-commonparent");
        skip |= ValidateObject(commandBuffer, queryPool, kVulkanObjectTypeQueryPool, false, "VUID-vkCmdBeginQueryIndexedEXT-queryPool-parameter", "VUID-vkCmdBeginQueryIndexedEXT-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index);

}

VKAPI_ATTR void VKAPI_CALL CmdEndQueryIndexedEXT(
    VkCommandBuffer                             commandBuffer,
    VkQueryPool                                 queryPool,
    uint32_t                                    query,
    uint32_t                                    index)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdEndQueryIndexedEXT-commandBuffer-parameter", "VUID-vkCmdEndQueryIndexedEXT-commonparent");
        skip |= ValidateObject(commandBuffer, queryPool, kVulkanObjectTypeQueryPool, false, "VUID-vkCmdEndQueryIndexedEXT-queryPool-parameter", "VUID-vkCmdEndQueryIndexedEXT-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index);

}

VKAPI_ATTR void VKAPI_CALL CmdDrawIndirectByteCountEXT(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    instanceCount,
    uint32_t                                    firstInstance,
    VkBuffer                                    counterBuffer,
    VkDeviceSize                                counterBufferOffset,
    uint32_t                                    counterOffset,
    uint32_t                                    vertexStride)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDrawIndirectByteCountEXT-commandBuffer-parameter", "VUID-vkCmdDrawIndirectByteCountEXT-commonparent");
        skip |= ValidateObject(commandBuffer, counterBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawIndirectByteCountEXT-counterBuffer-parameter", "VUID-vkCmdDrawIndirectByteCountEXT-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);

}

VKAPI_ATTR void VKAPI_CALL CmdDrawIndirectCountAMD(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDrawIndirectCountAMD-commandBuffer-parameter", "VUID-vkCmdDrawIndirectCountAMD-commonparent");
        skip |= ValidateObject(commandBuffer, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawIndirectCountAMD-buffer-parameter", "VUID-vkCmdDrawIndirectCountAMD-commonparent");
        skip |= ValidateObject(commandBuffer, countBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawIndirectCountAMD-countBuffer-parameter", "VUID-vkCmdDrawIndirectCountAMD-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);

}

VKAPI_ATTR void VKAPI_CALL CmdDrawIndexedIndirectCountAMD(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDrawIndexedIndirectCountAMD-commandBuffer-parameter", "VUID-vkCmdDrawIndexedIndirectCountAMD-commonparent");
        skip |= ValidateObject(commandBuffer, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawIndexedIndirectCountAMD-buffer-parameter", "VUID-vkCmdDrawIndexedIndirectCountAMD-commonparent");
        skip |= ValidateObject(commandBuffer, countBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawIndexedIndirectCountAMD-countBuffer-parameter", "VUID-vkCmdDrawIndexedIndirectCountAMD-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);

}

VKAPI_ATTR VkResult VKAPI_CALL GetShaderInfoAMD(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    VkShaderStageFlagBits                       shaderStage,
    VkShaderInfoTypeAMD                         infoType,
    size_t*                                     pInfoSize,
    void*                                       pInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetShaderInfoAMD-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, pipeline, kVulkanObjectTypePipeline, false, "VUID-vkGetShaderInfoAMD-pipeline-parameter", "VUID-vkGetShaderInfoAMD-pipeline-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetShaderInfoAMD(device, pipeline, shaderStage, infoType, pInfoSize, pInfo);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkPhysicalDevice                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
    VkExternalImageFormatPropertiesNV*          pExternalImageFormatProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceExternalImageFormatPropertiesNV-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);

    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR

VKAPI_ATTR VkResult VKAPI_CALL GetMemoryWin32HandleNV(
    VkDevice                                    device,
    VkDeviceMemory                              memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    HANDLE*                                     pHandle)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetMemoryWin32HandleNV-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, memory, kVulkanObjectTypeDeviceMemory, false, "VUID-vkGetMemoryWin32HandleNV-memory-parameter", "VUID-vkGetMemoryWin32HandleNV-memory-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetMemoryWin32HandleNV(device, memory, handleType, pHandle);

    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_VI_NN

VKAPI_ATTR VkResult VKAPI_CALL CreateViSurfaceNN(
    VkInstance                                  instance,
    const VkViSurfaceCreateInfoNN*              pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkCreateViSurfaceNN-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.CreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(instance, *pSurface, kVulkanObjectTypeSurfaceKHR, pAllocator);
    }
    return result;
}
#endif // VK_USE_PLATFORM_VI_NN

VKAPI_ATTR void VKAPI_CALL CmdBeginConditionalRenderingEXT(
    VkCommandBuffer                             commandBuffer,
    const VkConditionalRenderingBeginInfoEXT*   pConditionalRenderingBegin)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBeginConditionalRenderingEXT-commandBuffer-parameter", kVUIDUndefined);
        if (pConditionalRenderingBegin) {
            skip |= ValidateObject(commandBuffer, pConditionalRenderingBegin->buffer, kVulkanObjectTypeBuffer, false, kVUIDUndefined, kVUIDUndefined);
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin);

}

VKAPI_ATTR void VKAPI_CALL CmdEndConditionalRenderingEXT(
    VkCommandBuffer                             commandBuffer)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdEndConditionalRenderingEXT-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdEndConditionalRenderingEXT(commandBuffer);

}

VKAPI_ATTR void VKAPI_CALL CmdProcessCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdProcessCommandsInfoNVX*          pProcessCommandsInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdProcessCommandsNVX-commandBuffer-parameter", kVUIDUndefined);
        if (pProcessCommandsInfo) {
            skip |= ValidateObject(commandBuffer, pProcessCommandsInfo->objectTable, kVulkanObjectTypeObjectTableNVX, false, "VUID-VkCmdProcessCommandsInfoNVX-objectTable-parameter", "VUID-VkCmdProcessCommandsInfoNVX-commonparent");
            skip |= ValidateObject(commandBuffer, pProcessCommandsInfo->indirectCommandsLayout, kVulkanObjectTypeIndirectCommandsLayoutNVX, false, "VUID-VkCmdProcessCommandsInfoNVX-indirectCommandsLayout-parameter", "VUID-VkCmdProcessCommandsInfoNVX-commonparent");
            if (pProcessCommandsInfo->pIndirectCommandsTokens) {
                for (uint32_t index1 = 0; index1 < pProcessCommandsInfo->indirectCommandsTokenCount; ++index1) {
                    skip |= ValidateObject(commandBuffer, pProcessCommandsInfo->pIndirectCommandsTokens[index1].buffer, kVulkanObjectTypeBuffer, false, "VUID-VkIndirectCommandsTokenNVX-buffer-parameter", kVUIDUndefined);
                }
            }
            skip |= ValidateObject(commandBuffer, pProcessCommandsInfo->targetCommandBuffer, kVulkanObjectTypeCommandBuffer, true, "VUID-VkCmdProcessCommandsInfoNVX-targetCommandBuffer-parameter", "VUID-VkCmdProcessCommandsInfoNVX-commonparent");
            skip |= ValidateObject(commandBuffer, pProcessCommandsInfo->sequencesCountBuffer, kVulkanObjectTypeBuffer, true, "VUID-VkCmdProcessCommandsInfoNVX-sequencesCountBuffer-parameter", "VUID-VkCmdProcessCommandsInfoNVX-commonparent");
            skip |= ValidateObject(commandBuffer, pProcessCommandsInfo->sequencesIndexBuffer, kVulkanObjectTypeBuffer, true, "VUID-VkCmdProcessCommandsInfoNVX-sequencesIndexBuffer-parameter", "VUID-VkCmdProcessCommandsInfoNVX-commonparent");
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdProcessCommandsNVX(commandBuffer, pProcessCommandsInfo);

}

VKAPI_ATTR void VKAPI_CALL CmdReserveSpaceForCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdReserveSpaceForCommandsInfoNVX*  pReserveSpaceInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdReserveSpaceForCommandsNVX-commandBuffer-parameter", kVUIDUndefined);
        if (pReserveSpaceInfo) {
            skip |= ValidateObject(commandBuffer, pReserveSpaceInfo->objectTable, kVulkanObjectTypeObjectTableNVX, false, "VUID-VkCmdReserveSpaceForCommandsInfoNVX-objectTable-parameter", "VUID-VkCmdReserveSpaceForCommandsInfoNVX-commonparent");
            skip |= ValidateObject(commandBuffer, pReserveSpaceInfo->indirectCommandsLayout, kVulkanObjectTypeIndirectCommandsLayoutNVX, false, "VUID-VkCmdReserveSpaceForCommandsInfoNVX-indirectCommandsLayout-parameter", "VUID-VkCmdReserveSpaceForCommandsInfoNVX-commonparent");
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdReserveSpaceForCommandsNVX(commandBuffer, pReserveSpaceInfo);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkIndirectCommandsLayoutNVX*                pIndirectCommandsLayout)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateIndirectCommandsLayoutNVX-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateIndirectCommandsLayoutNVX(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pIndirectCommandsLayout, kVulkanObjectTypeIndirectCommandsLayoutNVX, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    VkIndirectCommandsLayoutNVX                 indirectCommandsLayout,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyIndirectCommandsLayoutNVX-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, indirectCommandsLayout, kVulkanObjectTypeIndirectCommandsLayoutNVX, false, "VUID-vkDestroyIndirectCommandsLayoutNVX-indirectCommandsLayout-parameter", "VUID-vkDestroyIndirectCommandsLayoutNVX-indirectCommandsLayout-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, indirectCommandsLayout, kVulkanObjectTypeIndirectCommandsLayoutNVX, pAllocator, kVUIDUndefined, kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyIndirectCommandsLayoutNVX(device, indirectCommandsLayout, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateObjectTableNVX(
    VkDevice                                    device,
    const VkObjectTableCreateInfoNVX*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkObjectTableNVX*                           pObjectTable)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateObjectTableNVX-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateObjectTableNVX(device, pCreateInfo, pAllocator, pObjectTable);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pObjectTable, kVulkanObjectTypeObjectTableNVX, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyObjectTableNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyObjectTableNVX-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, objectTable, kVulkanObjectTypeObjectTableNVX, false, "VUID-vkDestroyObjectTableNVX-objectTable-parameter", "VUID-vkDestroyObjectTableNVX-objectTable-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, objectTable, kVulkanObjectTypeObjectTableNVX, pAllocator, kVUIDUndefined, kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyObjectTableNVX(device, objectTable, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL RegisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectTableEntryNVX* const*         ppObjectTableEntries,
    const uint32_t*                             pObjectIndices)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkRegisterObjectsNVX-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, objectTable, kVulkanObjectTypeObjectTableNVX, false, "VUID-vkRegisterObjectsNVX-objectTable-parameter", "VUID-vkRegisterObjectsNVX-objectTable-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.RegisterObjectsNVX(device, objectTable, objectCount, ppObjectTableEntries, pObjectIndices);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL UnregisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectEntryTypeNVX*                 pObjectEntryTypes,
    const uint32_t*                             pObjectIndices)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkUnregisterObjectsNVX-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, objectTable, kVulkanObjectTypeObjectTableNVX, false, "VUID-vkUnregisterObjectsNVX-objectTable-parameter", "VUID-vkUnregisterObjectsNVX-objectTable-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.UnregisterObjectsNVX(device, objectTable, objectCount, pObjectEntryTypes, pObjectIndices);

    return result;
}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    VkPhysicalDevice                            physicalDevice,
    VkDeviceGeneratedCommandsFeaturesNVX*       pFeatures,
    VkDeviceGeneratedCommandsLimitsNVX*         pLimits)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceGeneratedCommandsPropertiesNVX(physicalDevice, pFeatures, pLimits);

}

VKAPI_ATTR void VKAPI_CALL CmdSetViewportWScalingNV(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkViewportWScalingNV*                 pViewportWScalings)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetViewportWScalingNV-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);

}

VKAPI_ATTR VkResult VKAPI_CALL ReleaseDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    VkDisplayKHR                                display)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkReleaseDisplayEXT-physicalDevice-parameter", kVUIDUndefined);
        skip |= ValidateObject(physicalDevice, display, kVulkanObjectTypeDisplayKHR, false, "VUID-vkReleaseDisplayEXT-display-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.ReleaseDisplayEXT(physicalDevice, display);

    return result;
}

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT

VKAPI_ATTR VkResult VKAPI_CALL AcquireXlibDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    Display*                                    dpy,
    VkDisplayKHR                                display)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkAcquireXlibDisplayEXT-physicalDevice-parameter", kVUIDUndefined);
        skip |= ValidateObject(physicalDevice, display, kVulkanObjectTypeDisplayKHR, false, "VUID-vkAcquireXlibDisplayEXT-display-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.AcquireXlibDisplayEXT(physicalDevice, dpy, display);

    return result;
}
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT

VKAPI_ATTR VkResult VKAPI_CALL GetRandROutputDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    Display*                                    dpy,
    RROutput                                    rrOutput,
    VkDisplayKHR*                               pDisplay)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetRandROutputDisplayEXT-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(physicalDevice, *pDisplay, kVulkanObjectTypeDisplayKHR, nullptr);
    }
    return result;
}
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceSurfaceCapabilities2EXT(
    VkPhysicalDevice                            physicalDevice,
    VkSurfaceKHR                                surface,
    VkSurfaceCapabilities2EXT*                  pSurfaceCapabilities)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceSurfaceCapabilities2EXT-physicalDevice-parameter", "VUID-vkGetPhysicalDeviceSurfaceCapabilities2EXT-commonparent");
        skip |= ValidateObject(physicalDevice, surface, kVulkanObjectTypeSurfaceKHR, false, "VUID-vkGetPhysicalDeviceSurfaceCapabilities2EXT-surface-parameter", "VUID-vkGetPhysicalDeviceSurfaceCapabilities2EXT-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL DisplayPowerControlEXT(
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayPowerInfoEXT*                pDisplayPowerInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDisplayPowerControlEXT-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, display, kVulkanObjectTypeDisplayKHR, false, "VUID-vkDisplayPowerControlEXT-display-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DisplayPowerControlEXT(device, display, pDisplayPowerInfo);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL RegisterDeviceEventEXT(
    VkDevice                                    device,
    const VkDeviceEventInfoEXT*                 pDeviceEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkRegisterDeviceEventEXT-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.RegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pFence, kVulkanObjectTypeFence, pAllocator);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL RegisterDisplayEventEXT(
    VkDevice                                    device,
    VkDisplayKHR                                display,
    const VkDisplayEventInfoEXT*                pDisplayEventInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkFence*                                    pFence)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkRegisterDisplayEventEXT-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, display, kVulkanObjectTypeDisplayKHR, false, "VUID-vkRegisterDisplayEventEXT-display-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.RegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pFence, kVulkanObjectTypeFence, pAllocator);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetSwapchainCounterEXT(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    uint64_t*                                   pCounterValue)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetSwapchainCounterEXT-device-parameter", "VUID-vkGetSwapchainCounterEXT-commonparent");
        skip |= ValidateObject(device, swapchain, kVulkanObjectTypeSwapchainKHR, false, "VUID-vkGetSwapchainCounterEXT-swapchain-parameter", "VUID-vkGetSwapchainCounterEXT-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetSwapchainCounterEXT(device, swapchain, counter, pCounterValue);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetRefreshCycleDurationGOOGLE(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    VkRefreshCycleDurationGOOGLE*               pDisplayTimingProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetRefreshCycleDurationGOOGLE-device-parameter", "VUID-vkGetRefreshCycleDurationGOOGLE-commonparent");
        skip |= ValidateObject(device, swapchain, kVulkanObjectTypeSwapchainKHR, false, "VUID-vkGetRefreshCycleDurationGOOGLE-swapchain-parameter", "VUID-vkGetRefreshCycleDurationGOOGLE-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetRefreshCycleDurationGOOGLE(device, swapchain, pDisplayTimingProperties);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetPastPresentationTimingGOOGLE(
    VkDevice                                    device,
    VkSwapchainKHR                              swapchain,
    uint32_t*                                   pPresentationTimingCount,
    VkPastPresentationTimingGOOGLE*             pPresentationTimings)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetPastPresentationTimingGOOGLE-device-parameter", "VUID-vkGetPastPresentationTimingGOOGLE-commonparent");
        skip |= ValidateObject(device, swapchain, kVulkanObjectTypeSwapchainKHR, false, "VUID-vkGetPastPresentationTimingGOOGLE-swapchain-parameter", "VUID-vkGetPastPresentationTimingGOOGLE-commonparent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetPastPresentationTimingGOOGLE(device, swapchain, pPresentationTimingCount, pPresentationTimings);

    return result;
}

VKAPI_ATTR void VKAPI_CALL CmdSetDiscardRectangleEXT(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const VkRect2D*                             pDiscardRectangles)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetDiscardRectangleEXT-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);

}

VKAPI_ATTR void VKAPI_CALL SetHdrMetadataEXT(
    VkDevice                                    device,
    uint32_t                                    swapchainCount,
    const VkSwapchainKHR*                       pSwapchains,
    const VkHdrMetadataEXT*                     pMetadata)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkSetHdrMetadataEXT-device-parameter", "VUID-vkSetHdrMetadataEXT-commonparent");
        for (uint32_t index0 = 0; index0 < swapchainCount; ++index0) {
            skip |= ValidateObject(device, pSwapchains[index0], kVulkanObjectTypeSwapchainKHR, false, "VUID-vkSetHdrMetadataEXT-pSwapchains-parameter", "VUID-vkSetHdrMetadataEXT-commonparent");
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.SetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata);

}

#ifdef VK_USE_PLATFORM_IOS_MVK

VKAPI_ATTR VkResult VKAPI_CALL CreateIOSSurfaceMVK(
    VkInstance                                  instance,
    const VkIOSSurfaceCreateInfoMVK*            pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkCreateIOSSurfaceMVK-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.CreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(instance, *pSurface, kVulkanObjectTypeSurfaceKHR, pAllocator);
    }
    return result;
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK

VKAPI_ATTR VkResult VKAPI_CALL CreateMacOSSurfaceMVK(
    VkInstance                                  instance,
    const VkMacOSSurfaceCreateInfoMVK*          pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkCreateMacOSSurfaceMVK-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.CreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(instance, *pSurface, kVulkanObjectTypeSurfaceKHR, pAllocator);
    }
    return result;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL SetDebugUtilsObjectNameEXT(
    VkDevice                                    device,
    const VkDebugUtilsObjectNameInfoEXT*        pNameInfo);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL SetDebugUtilsObjectTagEXT(
    VkDevice                                    device,
    const VkDebugUtilsObjectTagInfoEXT*         pTagInfo);

// Declare only
VKAPI_ATTR void VKAPI_CALL QueueBeginDebugUtilsLabelEXT(
    VkQueue                                     queue,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);

// Declare only
VKAPI_ATTR void VKAPI_CALL QueueEndDebugUtilsLabelEXT(
    VkQueue                                     queue);

// Declare only
VKAPI_ATTR void VKAPI_CALL QueueInsertDebugUtilsLabelEXT(
    VkQueue                                     queue,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);

// Declare only
VKAPI_ATTR void VKAPI_CALL CmdBeginDebugUtilsLabelEXT(
    VkCommandBuffer                             commandBuffer,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);

// Declare only
VKAPI_ATTR void VKAPI_CALL CmdEndDebugUtilsLabelEXT(
    VkCommandBuffer                             commandBuffer);

// Declare only
VKAPI_ATTR void VKAPI_CALL CmdInsertDebugUtilsLabelEXT(
    VkCommandBuffer                             commandBuffer,
    const VkDebugUtilsLabelEXT*                 pLabelInfo);

// Declare only
VKAPI_ATTR VkResult VKAPI_CALL CreateDebugUtilsMessengerEXT(
    VkInstance                                  instance,
    const VkDebugUtilsMessengerCreateInfoEXT*   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDebugUtilsMessengerEXT*                   pMessenger);

// Declare only
VKAPI_ATTR void VKAPI_CALL DestroyDebugUtilsMessengerEXT(
    VkInstance                                  instance,
    VkDebugUtilsMessengerEXT                    messenger,
    const VkAllocationCallbacks*                pAllocator);

// Declare only
VKAPI_ATTR void VKAPI_CALL SubmitDebugUtilsMessageEXT(
    VkInstance                                  instance,
    VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
    const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData);

#ifdef VK_USE_PLATFORM_ANDROID_KHR

VKAPI_ATTR VkResult VKAPI_CALL GetAndroidHardwareBufferPropertiesANDROID(
    VkDevice                                    device,
    const struct AHardwareBuffer*               buffer,
    VkAndroidHardwareBufferPropertiesANDROID*   pProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetAndroidHardwareBufferPropertiesANDROID-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetAndroidHardwareBufferPropertiesANDROID(device, buffer, pProperties);

    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR

VKAPI_ATTR VkResult VKAPI_CALL GetMemoryAndroidHardwareBufferANDROID(
    VkDevice                                    device,
    const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo,
    struct AHardwareBuffer**                    pBuffer)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetMemoryAndroidHardwareBufferANDROID-device-parameter", kVUIDUndefined);
        if (pInfo) {
            skip |= ValidateObject(device, pInfo->memory, kVulkanObjectTypeDeviceMemory, false, kVUIDUndefined, kVUIDUndefined);
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetMemoryAndroidHardwareBufferANDROID(device, pInfo, pBuffer);

    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

VKAPI_ATTR void VKAPI_CALL CmdSetSampleLocationsEXT(
    VkCommandBuffer                             commandBuffer,
    const VkSampleLocationsInfoEXT*             pSampleLocationsInfo)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetSampleLocationsEXT-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);

}

VKAPI_ATTR void VKAPI_CALL GetPhysicalDeviceMultisamplePropertiesEXT(
    VkPhysicalDevice                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    VkMultisamplePropertiesEXT*                 pMultisampleProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceMultisamplePropertiesEXT-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties);

}

VKAPI_ATTR VkResult VKAPI_CALL GetImageDrmFormatModifierPropertiesEXT(
    VkDevice                                    device,
    VkImage                                     image,
    VkImageDrmFormatModifierPropertiesEXT*      pProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetImageDrmFormatModifierPropertiesEXT-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, image, kVulkanObjectTypeImage, false, "VUID-vkGetImageDrmFormatModifierPropertiesEXT-image-parameter", "VUID-vkGetImageDrmFormatModifierPropertiesEXT-image-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetImageDrmFormatModifierPropertiesEXT(device, image, pProperties);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL CreateValidationCacheEXT(
    VkDevice                                    device,
    const VkValidationCacheCreateInfoEXT*       pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkValidationCacheEXT*                       pValidationCache)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateValidationCacheEXT-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pValidationCache, kVulkanObjectTypeValidationCacheEXT, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyValidationCacheEXT(
    VkDevice                                    device,
    VkValidationCacheEXT                        validationCache,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyValidationCacheEXT-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, validationCache, kVulkanObjectTypeValidationCacheEXT, true, "VUID-vkDestroyValidationCacheEXT-validationCache-parameter", "VUID-vkDestroyValidationCacheEXT-validationCache-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, validationCache, kVulkanObjectTypeValidationCacheEXT, pAllocator, kVUIDUndefined, kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyValidationCacheEXT(device, validationCache, pAllocator);

}

VKAPI_ATTR VkResult VKAPI_CALL MergeValidationCachesEXT(
    VkDevice                                    device,
    VkValidationCacheEXT                        dstCache,
    uint32_t                                    srcCacheCount,
    const VkValidationCacheEXT*                 pSrcCaches)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkMergeValidationCachesEXT-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, dstCache, kVulkanObjectTypeValidationCacheEXT, false, "VUID-vkMergeValidationCachesEXT-dstCache-parameter", "VUID-vkMergeValidationCachesEXT-dstCache-parent");
        for (uint32_t index0 = 0; index0 < srcCacheCount; ++index0) {
            skip |= ValidateObject(device, pSrcCaches[index0], kVulkanObjectTypeValidationCacheEXT, false, "VUID-vkMergeValidationCachesEXT-pSrcCaches-parameter", "VUID-vkMergeValidationCachesEXT-pSrcCaches-parent");
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.MergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetValidationCacheDataEXT(
    VkDevice                                    device,
    VkValidationCacheEXT                        validationCache,
    size_t*                                     pDataSize,
    void*                                       pData)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetValidationCacheDataEXT-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, validationCache, kVulkanObjectTypeValidationCacheEXT, false, "VUID-vkGetValidationCacheDataEXT-validationCache-parameter", "VUID-vkGetValidationCacheDataEXT-validationCache-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetValidationCacheDataEXT(device, validationCache, pDataSize, pData);

    return result;
}

VKAPI_ATTR void VKAPI_CALL CmdBindShadingRateImageNV(
    VkCommandBuffer                             commandBuffer,
    VkImageView                                 imageView,
    VkImageLayout                               imageLayout)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBindShadingRateImageNV-commandBuffer-parameter", "VUID-vkCmdBindShadingRateImageNV-commonparent");
        skip |= ValidateObject(commandBuffer, imageView, kVulkanObjectTypeImageView, false, "VUID-vkCmdBindShadingRateImageNV-imageView-parameter", "VUID-vkCmdBindShadingRateImageNV-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout);

}

VKAPI_ATTR void VKAPI_CALL CmdSetViewportShadingRatePaletteNV(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkShadingRatePaletteNV*               pShadingRatePalettes)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetViewportShadingRatePaletteNV-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);

}

VKAPI_ATTR void VKAPI_CALL CmdSetCoarseSampleOrderNV(
    VkCommandBuffer                             commandBuffer,
    VkCoarseSampleOrderTypeNV                   sampleOrderType,
    uint32_t                                    customSampleOrderCount,
    const VkCoarseSampleOrderCustomNV*          pCustomSampleOrders)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetCoarseSampleOrderNV-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateAccelerationStructureNVX(
    VkDevice                                    device,
    const VkAccelerationStructureCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkAccelerationStructureNVX*                 pAccelerationStructure)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateAccelerationStructureNVX-device-parameter", kVUIDUndefined);
        if (pCreateInfo) {
            if (pCreateInfo->pGeometries) {
                for (uint32_t index1 = 0; index1 < pCreateInfo->geometryCount; ++index1) {
                    skip |= ValidateObject(device, pCreateInfo->pGeometries[index1].geometry.triangles.vertexData, kVulkanObjectTypeBuffer, true, "VUID-VkGeometryTrianglesNVX-vertexData-parameter", "VUID-VkGeometryTrianglesNVX-commonparent");
                    skip |= ValidateObject(device, pCreateInfo->pGeometries[index1].geometry.triangles.indexData, kVulkanObjectTypeBuffer, true, "VUID-VkGeometryTrianglesNVX-indexData-parameter", "VUID-VkGeometryTrianglesNVX-commonparent");
                    skip |= ValidateObject(device, pCreateInfo->pGeometries[index1].geometry.triangles.transformData, kVulkanObjectTypeBuffer, true, "VUID-VkGeometryTrianglesNVX-transformData-parameter", "VUID-VkGeometryTrianglesNVX-commonparent");
                    skip |= ValidateObject(device, pCreateInfo->pGeometries[index1].geometry.aabbs.aabbData, kVulkanObjectTypeBuffer, true, "VUID-VkGeometryAABBNVX-aabbData-parameter", kVUIDUndefined);
                }
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateAccelerationStructureNVX(device, pCreateInfo, pAllocator, pAccelerationStructure);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(device, *pAccelerationStructure, kVulkanObjectTypeAccelerationStructureNVX, pAllocator);
    }
    return result;
}

VKAPI_ATTR void VKAPI_CALL DestroyAccelerationStructureNVX(
    VkDevice                                    device,
    VkAccelerationStructureNVX                  accelerationStructure,
    const VkAllocationCallbacks*                pAllocator)
{
    bool skip = false;
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkDestroyAccelerationStructureNVX-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, accelerationStructure, kVulkanObjectTypeAccelerationStructureNVX, false, "VUID-vkDestroyAccelerationStructureNVX-accelerationStructure-parameter", "VUID-vkDestroyAccelerationStructureNVX-accelerationStructure-parent");
    if (skip) return;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        DestroyObject(device, accelerationStructure, kVulkanObjectTypeAccelerationStructureNVX, pAllocator, kVUIDUndefined, kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.DestroyAccelerationStructureNVX(device, accelerationStructure, pAllocator);

}

VKAPI_ATTR void VKAPI_CALL GetAccelerationStructureMemoryRequirementsNVX(
    VkDevice                                    device,
    const VkAccelerationStructureMemoryRequirementsInfoNVX* pInfo,
    VkMemoryRequirements2KHR*                   pMemoryRequirements)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetAccelerationStructureMemoryRequirementsNVX-device-parameter", kVUIDUndefined);
        if (pInfo) {
            skip |= ValidateObject(device, pInfo->accelerationStructure, kVulkanObjectTypeAccelerationStructureNVX, false, "VUID-VkAccelerationStructureMemoryRequirementsInfoNVX-accelerationStructure-parameter", kVUIDUndefined);
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetAccelerationStructureMemoryRequirementsNVX(device, pInfo, pMemoryRequirements);

}

VKAPI_ATTR void VKAPI_CALL GetAccelerationStructureScratchMemoryRequirementsNVX(
    VkDevice                                    device,
    const VkAccelerationStructureMemoryRequirementsInfoNVX* pInfo,
    VkMemoryRequirements2KHR*                   pMemoryRequirements)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetAccelerationStructureScratchMemoryRequirementsNVX-device-parameter", kVUIDUndefined);
        if (pInfo) {
            skip |= ValidateObject(device, pInfo->accelerationStructure, kVulkanObjectTypeAccelerationStructureNVX, false, "VUID-VkAccelerationStructureMemoryRequirementsInfoNVX-accelerationStructure-parameter", kVUIDUndefined);
        }
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetAccelerationStructureScratchMemoryRequirementsNVX(device, pInfo, pMemoryRequirements);

}

VKAPI_ATTR VkResult VKAPI_CALL BindAccelerationStructureMemoryNVX(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindAccelerationStructureMemoryInfoNVX* pBindInfos)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkBindAccelerationStructureMemoryNVX-device-parameter", kVUIDUndefined);
        if (pBindInfos) {
            for (uint32_t index0 = 0; index0 < bindInfoCount; ++index0) {
                skip |= ValidateObject(device, pBindInfos[index0].accelerationStructure, kVulkanObjectTypeAccelerationStructureNVX, false, "VUID-VkBindAccelerationStructureMemoryInfoNVX-accelerationStructure-parameter", "VUID-VkBindAccelerationStructureMemoryInfoNVX-commonparent");
                skip |= ValidateObject(device, pBindInfos[index0].memory, kVulkanObjectTypeDeviceMemory, false, "VUID-VkBindAccelerationStructureMemoryInfoNVX-memory-parameter", "VUID-VkBindAccelerationStructureMemoryInfoNVX-commonparent");
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.BindAccelerationStructureMemoryNVX(device, bindInfoCount, pBindInfos);

    return result;
}

VKAPI_ATTR void VKAPI_CALL CmdBuildAccelerationStructureNVX(
    VkCommandBuffer                             commandBuffer,
    VkAccelerationStructureTypeNVX              type,
    uint32_t                                    instanceCount,
    VkBuffer                                    instanceData,
    VkDeviceSize                                instanceOffset,
    uint32_t                                    geometryCount,
    const VkGeometryNVX*                        pGeometries,
    VkBuildAccelerationStructureFlagsNVX        flags,
    VkBool32                                    update,
    VkAccelerationStructureNVX                  dst,
    VkAccelerationStructureNVX                  src,
    VkBuffer                                    scratch,
    VkDeviceSize                                scratchOffset)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdBuildAccelerationStructureNVX-commandBuffer-parameter", "VUID-vkCmdBuildAccelerationStructureNVX-commonparent");
        skip |= ValidateObject(commandBuffer, instanceData, kVulkanObjectTypeBuffer, true, "VUID-vkCmdBuildAccelerationStructureNVX-instanceData-parameter", "VUID-vkCmdBuildAccelerationStructureNVX-commonparent");
        if (pGeometries) {
            for (uint32_t index0 = 0; index0 < geometryCount; ++index0) {
                skip |= ValidateObject(commandBuffer, pGeometries[index0].geometry.triangles.vertexData, kVulkanObjectTypeBuffer, true, "VUID-VkGeometryTrianglesNVX-vertexData-parameter", "VUID-VkGeometryTrianglesNVX-commonparent");
                skip |= ValidateObject(commandBuffer, pGeometries[index0].geometry.triangles.indexData, kVulkanObjectTypeBuffer, true, "VUID-VkGeometryTrianglesNVX-indexData-parameter", "VUID-VkGeometryTrianglesNVX-commonparent");
                skip |= ValidateObject(commandBuffer, pGeometries[index0].geometry.triangles.transformData, kVulkanObjectTypeBuffer, true, "VUID-VkGeometryTrianglesNVX-transformData-parameter", "VUID-VkGeometryTrianglesNVX-commonparent");
                skip |= ValidateObject(commandBuffer, pGeometries[index0].geometry.aabbs.aabbData, kVulkanObjectTypeBuffer, true, "VUID-VkGeometryAABBNVX-aabbData-parameter", kVUIDUndefined);
            }
        }
        skip |= ValidateObject(commandBuffer, dst, kVulkanObjectTypeAccelerationStructureNVX, false, "VUID-vkCmdBuildAccelerationStructureNVX-dst-parameter", "VUID-vkCmdBuildAccelerationStructureNVX-commonparent");
        skip |= ValidateObject(commandBuffer, src, kVulkanObjectTypeAccelerationStructureNVX, true, "VUID-vkCmdBuildAccelerationStructureNVX-src-parameter", "VUID-vkCmdBuildAccelerationStructureNVX-commonparent");
        skip |= ValidateObject(commandBuffer, scratch, kVulkanObjectTypeBuffer, false, "VUID-vkCmdBuildAccelerationStructureNVX-scratch-parameter", "VUID-vkCmdBuildAccelerationStructureNVX-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdBuildAccelerationStructureNVX(commandBuffer, type, instanceCount, instanceData, instanceOffset, geometryCount, pGeometries, flags, update, dst, src, scratch, scratchOffset);

}

VKAPI_ATTR void VKAPI_CALL CmdCopyAccelerationStructureNVX(
    VkCommandBuffer                             commandBuffer,
    VkAccelerationStructureNVX                  dst,
    VkAccelerationStructureNVX                  src,
    VkCopyAccelerationStructureModeNVX          mode)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdCopyAccelerationStructureNVX-commandBuffer-parameter", "VUID-vkCmdCopyAccelerationStructureNVX-commonparent");
        skip |= ValidateObject(commandBuffer, dst, kVulkanObjectTypeAccelerationStructureNVX, false, "VUID-vkCmdCopyAccelerationStructureNVX-dst-parameter", "VUID-vkCmdCopyAccelerationStructureNVX-commonparent");
        skip |= ValidateObject(commandBuffer, src, kVulkanObjectTypeAccelerationStructureNVX, false, "VUID-vkCmdCopyAccelerationStructureNVX-src-parameter", "VUID-vkCmdCopyAccelerationStructureNVX-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdCopyAccelerationStructureNVX(commandBuffer, dst, src, mode);

}

VKAPI_ATTR void VKAPI_CALL CmdTraceRaysNVX(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    raygenShaderBindingTableBuffer,
    VkDeviceSize                                raygenShaderBindingOffset,
    VkBuffer                                    missShaderBindingTableBuffer,
    VkDeviceSize                                missShaderBindingOffset,
    VkDeviceSize                                missShaderBindingStride,
    VkBuffer                                    hitShaderBindingTableBuffer,
    VkDeviceSize                                hitShaderBindingOffset,
    VkDeviceSize                                hitShaderBindingStride,
    uint32_t                                    width,
    uint32_t                                    height)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdTraceRaysNVX-commandBuffer-parameter", "VUID-vkCmdTraceRaysNVX-commonparent");
        skip |= ValidateObject(commandBuffer, raygenShaderBindingTableBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdTraceRaysNVX-raygenShaderBindingTableBuffer-parameter", "VUID-vkCmdTraceRaysNVX-commonparent");
        skip |= ValidateObject(commandBuffer, missShaderBindingTableBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdTraceRaysNVX-missShaderBindingTableBuffer-parameter", "VUID-vkCmdTraceRaysNVX-commonparent");
        skip |= ValidateObject(commandBuffer, hitShaderBindingTableBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdTraceRaysNVX-hitShaderBindingTableBuffer-parameter", "VUID-vkCmdTraceRaysNVX-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdTraceRaysNVX(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, width, height);

}

VKAPI_ATTR VkResult VKAPI_CALL CreateRaytracingPipelinesNVX(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkRaytracingPipelineCreateInfoNVX*    pCreateInfos,
    const VkAllocationCallbacks*                pAllocator,
    VkPipeline*                                 pPipelines)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCreateRaytracingPipelinesNVX-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, pipelineCache, kVulkanObjectTypePipelineCache, true, "VUID-vkCreateRaytracingPipelinesNVX-pipelineCache-parameter", "VUID-vkCreateRaytracingPipelinesNVX-pipelineCache-parent");
        if (pCreateInfos) {
            for (uint32_t index0 = 0; index0 < createInfoCount; ++index0) {
                if (pCreateInfos[index0].pStages) {
                    for (uint32_t index1 = 0; index1 < pCreateInfos[index0].stageCount; ++index1) {
                        skip |= ValidateObject(device, pCreateInfos[index0].pStages[index1].module, kVulkanObjectTypeShaderModule, false, "VUID-VkPipelineShaderStageCreateInfo-module-parameter", kVUIDUndefined);
                    }
                }
                skip |= ValidateObject(device, pCreateInfos[index0].layout, kVulkanObjectTypePipelineLayout, false, "VUID-VkRaytracingPipelineCreateInfoNVX-layout-parameter", "VUID-VkRaytracingPipelineCreateInfoNVX-commonparent");
                skip |= ValidateObject(device, pCreateInfos[index0].basePipelineHandle, kVulkanObjectTypePipeline, true, kVUIDUndefined, "VUID-VkRaytracingPipelineCreateInfoNVX-commonparent");
            }
        }
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CreateRaytracingPipelinesNVX(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        for (uint32_t index = 0; index < createInfoCount; index++) {
            CreateObject(device, pPipelines[index], kVulkanObjectTypePipeline, pAllocator);
        }
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetRaytracingShaderHandlesNVX(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    void*                                       pData)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetRaytracingShaderHandlesNVX-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, pipeline, kVulkanObjectTypePipeline, false, "VUID-vkGetRaytracingShaderHandlesNVX-pipeline-parameter", "VUID-vkGetRaytracingShaderHandlesNVX-pipeline-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetRaytracingShaderHandlesNVX(device, pipeline, firstGroup, groupCount, dataSize, pData);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetAccelerationStructureHandleNVX(
    VkDevice                                    device,
    VkAccelerationStructureNVX                  accelerationStructure,
    size_t                                      dataSize,
    void*                                       pData)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetAccelerationStructureHandleNVX-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, accelerationStructure, kVulkanObjectTypeAccelerationStructureNVX, false, "VUID-vkGetAccelerationStructureHandleNVX-accelerationStructure-parameter", "VUID-vkGetAccelerationStructureHandleNVX-accelerationStructure-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetAccelerationStructureHandleNVX(device, accelerationStructure, dataSize, pData);

    return result;
}

VKAPI_ATTR void VKAPI_CALL CmdWriteAccelerationStructurePropertiesNVX(
    VkCommandBuffer                             commandBuffer,
    VkAccelerationStructureNVX                  accelerationStructure,
    VkQueryType                                 queryType,
    VkQueryPool                                 queryPool,
    uint32_t                                    query)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdWriteAccelerationStructurePropertiesNVX-commandBuffer-parameter", "VUID-vkCmdWriteAccelerationStructurePropertiesNVX-commonparent");
        skip |= ValidateObject(commandBuffer, accelerationStructure, kVulkanObjectTypeAccelerationStructureNVX, false, "VUID-vkCmdWriteAccelerationStructurePropertiesNVX-accelerationStructure-parameter", "VUID-vkCmdWriteAccelerationStructurePropertiesNVX-commonparent");
        skip |= ValidateObject(commandBuffer, queryPool, kVulkanObjectTypeQueryPool, false, "VUID-vkCmdWriteAccelerationStructurePropertiesNVX-queryPool-parameter", "VUID-vkCmdWriteAccelerationStructurePropertiesNVX-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdWriteAccelerationStructurePropertiesNVX(commandBuffer, accelerationStructure, queryType, queryPool, query);

}

VKAPI_ATTR VkResult VKAPI_CALL CompileDeferredNVX(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    uint32_t                                    shader)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkCompileDeferredNVX-device-parameter", kVUIDUndefined);
        skip |= ValidateObject(device, pipeline, kVulkanObjectTypePipeline, false, "VUID-vkCompileDeferredNVX-pipeline-parameter", "VUID-vkCompileDeferredNVX-pipeline-parent");
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.CompileDeferredNVX(device, pipeline, shader);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetMemoryHostPointerPropertiesEXT(
    VkDevice                                    device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    const void*                                 pHostPointer,
    VkMemoryHostPointerPropertiesEXT*           pMemoryHostPointerProperties)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetMemoryHostPointerPropertiesEXT-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties);

    return result;
}

VKAPI_ATTR void VKAPI_CALL CmdWriteBufferMarkerAMD(
    VkCommandBuffer                             commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    VkBuffer                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdWriteBufferMarkerAMD-commandBuffer-parameter", "VUID-vkCmdWriteBufferMarkerAMD-commonparent");
        skip |= ValidateObject(commandBuffer, dstBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdWriteBufferMarkerAMD-dstBuffer-parameter", "VUID-vkCmdWriteBufferMarkerAMD-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);

}

VKAPI_ATTR VkResult VKAPI_CALL GetPhysicalDeviceCalibrateableTimeDomainsEXT(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pTimeDomainCount,
    VkTimeDomainEXT*                            pTimeDomains)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(physicalDevice, physicalDevice, kVulkanObjectTypePhysicalDevice, false, "VUID-vkGetPhysicalDeviceCalibrateableTimeDomainsEXT-physicalDevice-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(physicalDevice), layer_data_map)->instance_dispatch_table.GetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains);

    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL GetCalibratedTimestampsEXT(
    VkDevice                                    device,
    uint32_t                                    timestampCount,
    const VkCalibratedTimestampInfoEXT*         pTimestampInfos,
    uint64_t*                                   pTimestamps,
    uint64_t*                                   pMaxDeviation)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(device, device, kVulkanObjectTypeDevice, false, "VUID-vkGetCalibratedTimestampsEXT-device-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(device), layer_data_map)->device_dispatch_table.GetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);

    return result;
}

VKAPI_ATTR void VKAPI_CALL CmdDrawMeshTasksNV(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    taskCount,
    uint32_t                                    firstTask)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDrawMeshTasksNV-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask);

}

VKAPI_ATTR void VKAPI_CALL CmdDrawMeshTasksIndirectNV(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDrawMeshTasksIndirectNV-commandBuffer-parameter", "VUID-vkCmdDrawMeshTasksIndirectNV-commonparent");
        skip |= ValidateObject(commandBuffer, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawMeshTasksIndirectNV-buffer-parameter", "VUID-vkCmdDrawMeshTasksIndirectNV-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride);

}

VKAPI_ATTR void VKAPI_CALL CmdDrawMeshTasksIndirectCountNV(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdDrawMeshTasksIndirectCountNV-commandBuffer-parameter", "VUID-vkCmdDrawMeshTasksIndirectCountNV-commonparent");
        skip |= ValidateObject(commandBuffer, buffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawMeshTasksIndirectCountNV-buffer-parameter", "VUID-vkCmdDrawMeshTasksIndirectCountNV-commonparent");
        skip |= ValidateObject(commandBuffer, countBuffer, kVulkanObjectTypeBuffer, false, "VUID-vkCmdDrawMeshTasksIndirectCountNV-countBuffer-parameter", "VUID-vkCmdDrawMeshTasksIndirectCountNV-commonparent");
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);

}

VKAPI_ATTR void VKAPI_CALL CmdSetExclusiveScissorNV(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstExclusiveScissor,
    uint32_t                                    exclusiveScissorCount,
    const VkRect2D*                             pExclusiveScissors)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetExclusiveScissorNV-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);

}

VKAPI_ATTR void VKAPI_CALL CmdSetCheckpointNV(
    VkCommandBuffer                             commandBuffer,
    const void*                                 pCheckpointMarker)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(commandBuffer, commandBuffer, kVulkanObjectTypeCommandBuffer, false, "VUID-vkCmdSetCheckpointNV-commandBuffer-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(commandBuffer), layer_data_map)->device_dispatch_table.CmdSetCheckpointNV(commandBuffer, pCheckpointMarker);

}

VKAPI_ATTR void VKAPI_CALL GetQueueCheckpointDataNV(
    VkQueue                                     queue,
    uint32_t*                                   pCheckpointDataCount,
    VkCheckpointDataNV*                         pCheckpointData)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(queue, queue, kVulkanObjectTypeQueue, false, "VUID-vkGetQueueCheckpointDataNV-queue-parameter", kVUIDUndefined);
    }
    if (skip) return;
    GetLayerDataPtr(get_dispatch_key(queue), layer_data_map)->device_dispatch_table.GetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData);

}

#ifdef VK_USE_PLATFORM_FUCHSIA

VKAPI_ATTR VkResult VKAPI_CALL CreateImagePipeSurfaceFUCHSIA(
    VkInstance                                  instance,
    const VkImagePipeSurfaceCreateInfoFUCHSIA*  pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface)
{
    bool skip = false;
    {
        std::lock_guard<std::mutex> lock(global_lock);
        skip |= ValidateObject(instance, instance, kVulkanObjectTypeInstance, false, "VUID-vkCreateImagePipeSurfaceFUCHSIA-instance-parameter", kVUIDUndefined);
    }
    if (skip) return VK_ERROR_VALIDATION_FAILED_EXT;
    VkResult result = GetLayerDataPtr(get_dispatch_key(instance), layer_data_map)->instance_dispatch_table.CreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface);
    if (VK_SUCCESS == result) {
        std::lock_guard<std::mutex> lock(global_lock);
        CreateObject(instance, *pSurface, kVulkanObjectTypeSurfaceKHR, pAllocator);
    }
    return result;
}
#endif // VK_USE_PLATFORM_FUCHSIA
// Map of all APIs to be intercepted by this layer
const std::unordered_map<std::string, void*> name_to_funcptr_map = {
    {"vkCreateInstance", (void *)CreateInstance},
    {"vkDestroyInstance", (void *)DestroyInstance},
    {"vkEnumeratePhysicalDevices", (void *)EnumeratePhysicalDevices},
    {"vkGetPhysicalDeviceFeatures", (void*)GetPhysicalDeviceFeatures},
    {"vkGetPhysicalDeviceFormatProperties", (void*)GetPhysicalDeviceFormatProperties},
    {"vkGetPhysicalDeviceImageFormatProperties", (void*)GetPhysicalDeviceImageFormatProperties},
    {"vkGetPhysicalDeviceProperties", (void*)GetPhysicalDeviceProperties},
    {"vkGetPhysicalDeviceQueueFamilyProperties", (void *)GetPhysicalDeviceQueueFamilyProperties},
    {"vkGetPhysicalDeviceMemoryProperties", (void*)GetPhysicalDeviceMemoryProperties},
    {"vkGetInstanceProcAddr", (void *)GetInstanceProcAddr},
    {"vkGetDeviceProcAddr", (void *)GetDeviceProcAddr},
    {"vkCreateDevice", (void *)CreateDevice},
    {"vkDestroyDevice", (void *)DestroyDevice},
    {"vkEnumerateInstanceExtensionProperties", (void *)EnumerateInstanceExtensionProperties},
    {"vkEnumerateDeviceExtensionProperties", (void *)EnumerateDeviceExtensionProperties},
    {"vkEnumerateInstanceLayerProperties", (void *)EnumerateInstanceLayerProperties},
    {"vkEnumerateDeviceLayerProperties", (void *)EnumerateDeviceLayerProperties},
    {"vkGetDeviceQueue", (void *)GetDeviceQueue},
    {"vkQueueSubmit", (void*)QueueSubmit},
    {"vkQueueWaitIdle", (void*)QueueWaitIdle},
    {"vkDeviceWaitIdle", (void*)DeviceWaitIdle},
    {"vkAllocateMemory", (void*)AllocateMemory},
    {"vkFreeMemory", (void*)FreeMemory},
    {"vkMapMemory", (void*)MapMemory},
    {"vkUnmapMemory", (void*)UnmapMemory},
    {"vkFlushMappedMemoryRanges", (void*)FlushMappedMemoryRanges},
    {"vkInvalidateMappedMemoryRanges", (void*)InvalidateMappedMemoryRanges},
    {"vkGetDeviceMemoryCommitment", (void*)GetDeviceMemoryCommitment},
    {"vkBindBufferMemory", (void*)BindBufferMemory},
    {"vkBindImageMemory", (void*)BindImageMemory},
    {"vkGetBufferMemoryRequirements", (void*)GetBufferMemoryRequirements},
    {"vkGetImageMemoryRequirements", (void*)GetImageMemoryRequirements},
    {"vkGetImageSparseMemoryRequirements", (void*)GetImageSparseMemoryRequirements},
    {"vkGetPhysicalDeviceSparseImageFormatProperties", (void*)GetPhysicalDeviceSparseImageFormatProperties},
    {"vkQueueBindSparse", (void*)QueueBindSparse},
    {"vkCreateFence", (void*)CreateFence},
    {"vkDestroyFence", (void*)DestroyFence},
    {"vkResetFences", (void*)ResetFences},
    {"vkGetFenceStatus", (void*)GetFenceStatus},
    {"vkWaitForFences", (void*)WaitForFences},
    {"vkCreateSemaphore", (void*)CreateSemaphore},
    {"vkDestroySemaphore", (void*)DestroySemaphore},
    {"vkCreateEvent", (void*)CreateEvent},
    {"vkDestroyEvent", (void*)DestroyEvent},
    {"vkGetEventStatus", (void*)GetEventStatus},
    {"vkSetEvent", (void*)SetEvent},
    {"vkResetEvent", (void*)ResetEvent},
    {"vkCreateQueryPool", (void*)CreateQueryPool},
    {"vkDestroyQueryPool", (void*)DestroyQueryPool},
    {"vkGetQueryPoolResults", (void*)GetQueryPoolResults},
    {"vkCreateBuffer", (void*)CreateBuffer},
    {"vkDestroyBuffer", (void*)DestroyBuffer},
    {"vkCreateBufferView", (void*)CreateBufferView},
    {"vkDestroyBufferView", (void*)DestroyBufferView},
    {"vkCreateImage", (void*)CreateImage},
    {"vkDestroyImage", (void*)DestroyImage},
    {"vkGetImageSubresourceLayout", (void*)GetImageSubresourceLayout},
    {"vkCreateImageView", (void*)CreateImageView},
    {"vkDestroyImageView", (void*)DestroyImageView},
    {"vkCreateShaderModule", (void*)CreateShaderModule},
    {"vkDestroyShaderModule", (void*)DestroyShaderModule},
    {"vkCreatePipelineCache", (void*)CreatePipelineCache},
    {"vkDestroyPipelineCache", (void*)DestroyPipelineCache},
    {"vkGetPipelineCacheData", (void*)GetPipelineCacheData},
    {"vkMergePipelineCaches", (void*)MergePipelineCaches},
    {"vkCreateGraphicsPipelines", (void*)CreateGraphicsPipelines},
    {"vkCreateComputePipelines", (void *)CreateComputePipelines},
    {"vkDestroyPipeline", (void*)DestroyPipeline},
    {"vkCreatePipelineLayout", (void*)CreatePipelineLayout},
    {"vkDestroyPipelineLayout", (void*)DestroyPipelineLayout},
    {"vkCreateSampler", (void*)CreateSampler},
    {"vkDestroySampler", (void*)DestroySampler},
    {"vkCreateDescriptorSetLayout", (void *)CreateDescriptorSetLayout},
    {"vkDestroyDescriptorSetLayout", (void*)DestroyDescriptorSetLayout},
    {"vkCreateDescriptorPool", (void*)CreateDescriptorPool},
    {"vkDestroyDescriptorPool", (void *)DestroyDescriptorPool},
    {"vkResetDescriptorPool", (void *)ResetDescriptorPool},
    {"vkAllocateDescriptorSets", (void *)AllocateDescriptorSets},
    {"vkFreeDescriptorSets", (void *)FreeDescriptorSets},
    {"vkUpdateDescriptorSets", (void *)UpdateDescriptorSets},
    {"vkCreateFramebuffer", (void*)CreateFramebuffer},
    {"vkDestroyFramebuffer", (void*)DestroyFramebuffer},
    {"vkCreateRenderPass", (void*)CreateRenderPass},
    {"vkDestroyRenderPass", (void*)DestroyRenderPass},
    {"vkGetRenderAreaGranularity", (void*)GetRenderAreaGranularity},
    {"vkCreateCommandPool", (void*)CreateCommandPool},
    {"vkDestroyCommandPool", (void *)DestroyCommandPool},
    {"vkResetCommandPool", (void*)ResetCommandPool},
    {"vkAllocateCommandBuffers", (void *)AllocateCommandBuffers},
    {"vkFreeCommandBuffers", (void *)FreeCommandBuffers},
    {"vkBeginCommandBuffer", (void *)BeginCommandBuffer},
    {"vkEndCommandBuffer", (void*)EndCommandBuffer},
    {"vkResetCommandBuffer", (void*)ResetCommandBuffer},
    {"vkCmdBindPipeline", (void*)CmdBindPipeline},
    {"vkCmdSetViewport", (void*)CmdSetViewport},
    {"vkCmdSetScissor", (void*)CmdSetScissor},
    {"vkCmdSetLineWidth", (void*)CmdSetLineWidth},
    {"vkCmdSetDepthBias", (void*)CmdSetDepthBias},
    {"vkCmdSetBlendConstants", (void*)CmdSetBlendConstants},
    {"vkCmdSetDepthBounds", (void*)CmdSetDepthBounds},
    {"vkCmdSetStencilCompareMask", (void*)CmdSetStencilCompareMask},
    {"vkCmdSetStencilWriteMask", (void*)CmdSetStencilWriteMask},
    {"vkCmdSetStencilReference", (void*)CmdSetStencilReference},
    {"vkCmdBindDescriptorSets", (void*)CmdBindDescriptorSets},
    {"vkCmdBindIndexBuffer", (void*)CmdBindIndexBuffer},
    {"vkCmdBindVertexBuffers", (void*)CmdBindVertexBuffers},
    {"vkCmdDraw", (void*)CmdDraw},
    {"vkCmdDrawIndexed", (void*)CmdDrawIndexed},
    {"vkCmdDrawIndirect", (void*)CmdDrawIndirect},
    {"vkCmdDrawIndexedIndirect", (void*)CmdDrawIndexedIndirect},
    {"vkCmdDispatch", (void*)CmdDispatch},
    {"vkCmdDispatchIndirect", (void*)CmdDispatchIndirect},
    {"vkCmdCopyBuffer", (void*)CmdCopyBuffer},
    {"vkCmdCopyImage", (void*)CmdCopyImage},
    {"vkCmdBlitImage", (void*)CmdBlitImage},
    {"vkCmdCopyBufferToImage", (void*)CmdCopyBufferToImage},
    {"vkCmdCopyImageToBuffer", (void*)CmdCopyImageToBuffer},
    {"vkCmdUpdateBuffer", (void*)CmdUpdateBuffer},
    {"vkCmdFillBuffer", (void*)CmdFillBuffer},
    {"vkCmdClearColorImage", (void*)CmdClearColorImage},
    {"vkCmdClearDepthStencilImage", (void*)CmdClearDepthStencilImage},
    {"vkCmdClearAttachments", (void*)CmdClearAttachments},
    {"vkCmdResolveImage", (void*)CmdResolveImage},
    {"vkCmdSetEvent", (void*)CmdSetEvent},
    {"vkCmdResetEvent", (void*)CmdResetEvent},
    {"vkCmdWaitEvents", (void*)CmdWaitEvents},
    {"vkCmdPipelineBarrier", (void*)CmdPipelineBarrier},
    {"vkCmdBeginQuery", (void*)CmdBeginQuery},
    {"vkCmdEndQuery", (void*)CmdEndQuery},
    {"vkCmdResetQueryPool", (void*)CmdResetQueryPool},
    {"vkCmdWriteTimestamp", (void*)CmdWriteTimestamp},
    {"vkCmdCopyQueryPoolResults", (void*)CmdCopyQueryPoolResults},
    {"vkCmdPushConstants", (void*)CmdPushConstants},
    {"vkCmdBeginRenderPass", (void*)CmdBeginRenderPass},
    {"vkCmdNextSubpass", (void*)CmdNextSubpass},
    {"vkCmdEndRenderPass", (void*)CmdEndRenderPass},
    {"vkCmdExecuteCommands", (void*)CmdExecuteCommands},
    {"vkBindBufferMemory2", (void*)BindBufferMemory2},
    {"vkBindImageMemory2", (void*)BindImageMemory2},
    {"vkGetDeviceGroupPeerMemoryFeatures", (void*)GetDeviceGroupPeerMemoryFeatures},
    {"vkCmdSetDeviceMask", (void*)CmdSetDeviceMask},
    {"vkCmdDispatchBase", (void*)CmdDispatchBase},
    {"vkEnumeratePhysicalDeviceGroups", (void*)EnumeratePhysicalDeviceGroups},
    {"vkGetImageMemoryRequirements2", (void*)GetImageMemoryRequirements2},
    {"vkGetBufferMemoryRequirements2", (void*)GetBufferMemoryRequirements2},
    {"vkGetImageSparseMemoryRequirements2", (void*)GetImageSparseMemoryRequirements2},
    {"vkGetPhysicalDeviceFeatures2", (void*)GetPhysicalDeviceFeatures2},
    {"vkGetPhysicalDeviceProperties2", (void*)GetPhysicalDeviceProperties2},
    {"vkGetPhysicalDeviceFormatProperties2", (void*)GetPhysicalDeviceFormatProperties2},
    {"vkGetPhysicalDeviceImageFormatProperties2", (void*)GetPhysicalDeviceImageFormatProperties2},
    {"vkGetPhysicalDeviceQueueFamilyProperties2", (void *)GetPhysicalDeviceQueueFamilyProperties2},
    {"vkGetPhysicalDeviceMemoryProperties2", (void*)GetPhysicalDeviceMemoryProperties2},
    {"vkGetPhysicalDeviceSparseImageFormatProperties2", (void*)GetPhysicalDeviceSparseImageFormatProperties2},
    {"vkTrimCommandPool", (void*)TrimCommandPool},
    {"vkGetDeviceQueue2", (void *)GetDeviceQueue2},
    {"vkCreateSamplerYcbcrConversion", (void*)CreateSamplerYcbcrConversion},
    {"vkDestroySamplerYcbcrConversion", (void*)DestroySamplerYcbcrConversion},
    {"vkCreateDescriptorUpdateTemplate", (void*)CreateDescriptorUpdateTemplate},
    {"vkDestroyDescriptorUpdateTemplate", (void*)DestroyDescriptorUpdateTemplate},
    {"vkUpdateDescriptorSetWithTemplate", (void*)UpdateDescriptorSetWithTemplate},
    {"vkGetPhysicalDeviceExternalBufferProperties", (void*)GetPhysicalDeviceExternalBufferProperties},
    {"vkGetPhysicalDeviceExternalFenceProperties", (void*)GetPhysicalDeviceExternalFenceProperties},
    {"vkGetPhysicalDeviceExternalSemaphoreProperties", (void*)GetPhysicalDeviceExternalSemaphoreProperties},
    {"vkGetDescriptorSetLayoutSupport", (void *)GetDescriptorSetLayoutSupport},
    {"vkDestroySurfaceKHR", (void*)DestroySurfaceKHR},
    {"vkGetPhysicalDeviceSurfaceSupportKHR", (void*)GetPhysicalDeviceSurfaceSupportKHR},
    {"vkGetPhysicalDeviceSurfaceCapabilitiesKHR", (void*)GetPhysicalDeviceSurfaceCapabilitiesKHR},
    {"vkGetPhysicalDeviceSurfaceFormatsKHR", (void*)GetPhysicalDeviceSurfaceFormatsKHR},
    {"vkGetPhysicalDeviceSurfacePresentModesKHR", (void*)GetPhysicalDeviceSurfacePresentModesKHR},
    {"vkCreateSwapchainKHR", (void*)CreateSwapchainKHR},
    {"vkDestroySwapchainKHR", (void *)DestroySwapchainKHR},
    {"vkGetSwapchainImagesKHR", (void *)GetSwapchainImagesKHR},
    {"vkAcquireNextImageKHR", (void*)AcquireNextImageKHR},
    {"vkQueuePresentKHR", (void*)QueuePresentKHR},
    {"vkGetDeviceGroupPresentCapabilitiesKHR", (void*)GetDeviceGroupPresentCapabilitiesKHR},
    {"vkGetDeviceGroupSurfacePresentModesKHR", (void*)GetDeviceGroupSurfacePresentModesKHR},
    {"vkGetPhysicalDevicePresentRectanglesKHR", (void*)GetPhysicalDevicePresentRectanglesKHR},
    {"vkAcquireNextImage2KHR", (void*)AcquireNextImage2KHR},
    {"vkGetPhysicalDeviceDisplayPropertiesKHR", (void *)GetPhysicalDeviceDisplayPropertiesKHR},
    {"vkGetPhysicalDeviceDisplayPlanePropertiesKHR", (void*)GetPhysicalDeviceDisplayPlanePropertiesKHR},
    {"vkGetDisplayPlaneSupportedDisplaysKHR", (void *)GetDisplayPlaneSupportedDisplaysKHR},
    {"vkGetDisplayModePropertiesKHR", (void *)GetDisplayModePropertiesKHR},
    {"vkCreateDisplayModeKHR", (void*)CreateDisplayModeKHR},
    {"vkGetDisplayPlaneCapabilitiesKHR", (void*)GetDisplayPlaneCapabilitiesKHR},
    {"vkCreateDisplayPlaneSurfaceKHR", (void*)CreateDisplayPlaneSurfaceKHR},
    {"vkCreateSharedSwapchainsKHR", (void*)CreateSharedSwapchainsKHR},
#ifdef VK_USE_PLATFORM_XLIB_KHR
    {"vkCreateXlibSurfaceKHR", (void*)CreateXlibSurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
    {"vkGetPhysicalDeviceXlibPresentationSupportKHR", (void*)GetPhysicalDeviceXlibPresentationSupportKHR},
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    {"vkCreateXcbSurfaceKHR", (void*)CreateXcbSurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    {"vkGetPhysicalDeviceXcbPresentationSupportKHR", (void*)GetPhysicalDeviceXcbPresentationSupportKHR},
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    {"vkCreateWaylandSurfaceKHR", (void*)CreateWaylandSurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    {"vkGetPhysicalDeviceWaylandPresentationSupportKHR", (void*)GetPhysicalDeviceWaylandPresentationSupportKHR},
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
    {"vkCreateMirSurfaceKHR", (void*)CreateMirSurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
    {"vkGetPhysicalDeviceMirPresentationSupportKHR", (void*)GetPhysicalDeviceMirPresentationSupportKHR},
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    {"vkCreateAndroidSurfaceKHR", (void*)CreateAndroidSurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkCreateWin32SurfaceKHR", (void*)CreateWin32SurfaceKHR},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetPhysicalDeviceWin32PresentationSupportKHR", (void*)GetPhysicalDeviceWin32PresentationSupportKHR},
#endif
    {"vkGetPhysicalDeviceFeatures2KHR", (void*)GetPhysicalDeviceFeatures2KHR},
    {"vkGetPhysicalDeviceProperties2KHR", (void*)GetPhysicalDeviceProperties2KHR},
    {"vkGetPhysicalDeviceFormatProperties2KHR", (void*)GetPhysicalDeviceFormatProperties2KHR},
    {"vkGetPhysicalDeviceImageFormatProperties2KHR", (void*)GetPhysicalDeviceImageFormatProperties2KHR},
    {"vkGetPhysicalDeviceQueueFamilyProperties2KHR", (void *)GetPhysicalDeviceQueueFamilyProperties2KHR},
    {"vkGetPhysicalDeviceMemoryProperties2KHR", (void*)GetPhysicalDeviceMemoryProperties2KHR},
    {"vkGetPhysicalDeviceSparseImageFormatProperties2KHR", (void*)GetPhysicalDeviceSparseImageFormatProperties2KHR},
    {"vkGetDeviceGroupPeerMemoryFeaturesKHR", (void*)GetDeviceGroupPeerMemoryFeaturesKHR},
    {"vkCmdSetDeviceMaskKHR", (void*)CmdSetDeviceMaskKHR},
    {"vkCmdDispatchBaseKHR", (void*)CmdDispatchBaseKHR},
    {"vkTrimCommandPoolKHR", (void*)TrimCommandPoolKHR},
    {"vkEnumeratePhysicalDeviceGroupsKHR", (void*)EnumeratePhysicalDeviceGroupsKHR},
    {"vkGetPhysicalDeviceExternalBufferPropertiesKHR", (void*)GetPhysicalDeviceExternalBufferPropertiesKHR},
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetMemoryWin32HandleKHR", (void*)GetMemoryWin32HandleKHR},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetMemoryWin32HandlePropertiesKHR", (void*)GetMemoryWin32HandlePropertiesKHR},
#endif
    {"vkGetMemoryFdKHR", (void*)GetMemoryFdKHR},
    {"vkGetMemoryFdPropertiesKHR", (void*)GetMemoryFdPropertiesKHR},
    {"vkGetPhysicalDeviceExternalSemaphorePropertiesKHR", (void*)GetPhysicalDeviceExternalSemaphorePropertiesKHR},
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkImportSemaphoreWin32HandleKHR", (void*)ImportSemaphoreWin32HandleKHR},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetSemaphoreWin32HandleKHR", (void*)GetSemaphoreWin32HandleKHR},
#endif
    {"vkImportSemaphoreFdKHR", (void*)ImportSemaphoreFdKHR},
    {"vkGetSemaphoreFdKHR", (void*)GetSemaphoreFdKHR},
    {"vkCmdPushDescriptorSetKHR", (void *)CmdPushDescriptorSetKHR},
    {"vkCmdPushDescriptorSetWithTemplateKHR", (void*)CmdPushDescriptorSetWithTemplateKHR},
    {"vkCreateDescriptorUpdateTemplateKHR", (void*)CreateDescriptorUpdateTemplateKHR},
    {"vkDestroyDescriptorUpdateTemplateKHR", (void*)DestroyDescriptorUpdateTemplateKHR},
    {"vkUpdateDescriptorSetWithTemplateKHR", (void*)UpdateDescriptorSetWithTemplateKHR},
    {"vkCreateRenderPass2KHR", (void*)CreateRenderPass2KHR},
    {"vkCmdBeginRenderPass2KHR", (void*)CmdBeginRenderPass2KHR},
    {"vkCmdNextSubpass2KHR", (void*)CmdNextSubpass2KHR},
    {"vkCmdEndRenderPass2KHR", (void*)CmdEndRenderPass2KHR},
    {"vkGetSwapchainStatusKHR", (void*)GetSwapchainStatusKHR},
    {"vkGetPhysicalDeviceExternalFencePropertiesKHR", (void*)GetPhysicalDeviceExternalFencePropertiesKHR},
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkImportFenceWin32HandleKHR", (void*)ImportFenceWin32HandleKHR},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetFenceWin32HandleKHR", (void*)GetFenceWin32HandleKHR},
#endif
    {"vkImportFenceFdKHR", (void*)ImportFenceFdKHR},
    {"vkGetFenceFdKHR", (void*)GetFenceFdKHR},
    {"vkGetPhysicalDeviceSurfaceCapabilities2KHR", (void*)GetPhysicalDeviceSurfaceCapabilities2KHR},
    {"vkGetPhysicalDeviceSurfaceFormats2KHR", (void*)GetPhysicalDeviceSurfaceFormats2KHR},
    {"vkGetPhysicalDeviceDisplayProperties2KHR", (void *)GetPhysicalDeviceDisplayProperties2KHR},
    {"vkGetPhysicalDeviceDisplayPlaneProperties2KHR", (void*)GetPhysicalDeviceDisplayPlaneProperties2KHR},
    {"vkGetDisplayModeProperties2KHR", (void *)GetDisplayModeProperties2KHR},
    {"vkGetDisplayPlaneCapabilities2KHR", (void*)GetDisplayPlaneCapabilities2KHR},
    {"vkGetImageMemoryRequirements2KHR", (void*)GetImageMemoryRequirements2KHR},
    {"vkGetBufferMemoryRequirements2KHR", (void*)GetBufferMemoryRequirements2KHR},
    {"vkGetImageSparseMemoryRequirements2KHR", (void*)GetImageSparseMemoryRequirements2KHR},
    {"vkCreateSamplerYcbcrConversionKHR", (void*)CreateSamplerYcbcrConversionKHR},
    {"vkDestroySamplerYcbcrConversionKHR", (void*)DestroySamplerYcbcrConversionKHR},
    {"vkBindBufferMemory2KHR", (void*)BindBufferMemory2KHR},
    {"vkBindImageMemory2KHR", (void*)BindImageMemory2KHR},
    {"vkGetDescriptorSetLayoutSupportKHR", (void *)GetDescriptorSetLayoutSupportKHR},
    {"vkCmdDrawIndirectCountKHR", (void*)CmdDrawIndirectCountKHR},
    {"vkCmdDrawIndexedIndirectCountKHR", (void*)CmdDrawIndexedIndirectCountKHR},
    {"vkCreateDebugReportCallbackEXT", (void *)CreateDebugReportCallbackEXT},
    {"vkDestroyDebugReportCallbackEXT", (void *)DestroyDebugReportCallbackEXT},
    {"vkDebugReportMessageEXT", (void *)DebugReportMessageEXT},
    {"vkDebugMarkerSetObjectTagEXT", (void*)DebugMarkerSetObjectTagEXT},
    {"vkDebugMarkerSetObjectNameEXT", (void *)DebugMarkerSetObjectNameEXT},
    {"vkCmdDebugMarkerBeginEXT", (void*)CmdDebugMarkerBeginEXT},
    {"vkCmdDebugMarkerEndEXT", (void*)CmdDebugMarkerEndEXT},
    {"vkCmdDebugMarkerInsertEXT", (void*)CmdDebugMarkerInsertEXT},
    {"vkCmdBindTransformFeedbackBuffersEXT", (void*)CmdBindTransformFeedbackBuffersEXT},
    {"vkCmdBeginTransformFeedbackEXT", (void*)CmdBeginTransformFeedbackEXT},
    {"vkCmdEndTransformFeedbackEXT", (void*)CmdEndTransformFeedbackEXT},
    {"vkCmdBeginQueryIndexedEXT", (void*)CmdBeginQueryIndexedEXT},
    {"vkCmdEndQueryIndexedEXT", (void*)CmdEndQueryIndexedEXT},
    {"vkCmdDrawIndirectByteCountEXT", (void*)CmdDrawIndirectByteCountEXT},
    {"vkCmdDrawIndirectCountAMD", (void*)CmdDrawIndirectCountAMD},
    {"vkCmdDrawIndexedIndirectCountAMD", (void*)CmdDrawIndexedIndirectCountAMD},
    {"vkGetShaderInfoAMD", (void*)GetShaderInfoAMD},
    {"vkGetPhysicalDeviceExternalImageFormatPropertiesNV", (void*)GetPhysicalDeviceExternalImageFormatPropertiesNV},
#ifdef VK_USE_PLATFORM_WIN32_KHR
    {"vkGetMemoryWin32HandleNV", (void*)GetMemoryWin32HandleNV},
#endif
#ifdef VK_USE_PLATFORM_VI_NN
    {"vkCreateViSurfaceNN", (void*)CreateViSurfaceNN},
#endif
    {"vkCmdBeginConditionalRenderingEXT", (void*)CmdBeginConditionalRenderingEXT},
    {"vkCmdEndConditionalRenderingEXT", (void*)CmdEndConditionalRenderingEXT},
    {"vkCmdProcessCommandsNVX", (void*)CmdProcessCommandsNVX},
    {"vkCmdReserveSpaceForCommandsNVX", (void*)CmdReserveSpaceForCommandsNVX},
    {"vkCreateIndirectCommandsLayoutNVX", (void*)CreateIndirectCommandsLayoutNVX},
    {"vkDestroyIndirectCommandsLayoutNVX", (void*)DestroyIndirectCommandsLayoutNVX},
    {"vkCreateObjectTableNVX", (void*)CreateObjectTableNVX},
    {"vkDestroyObjectTableNVX", (void*)DestroyObjectTableNVX},
    {"vkRegisterObjectsNVX", (void*)RegisterObjectsNVX},
    {"vkUnregisterObjectsNVX", (void*)UnregisterObjectsNVX},
    {"vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX", (void*)GetPhysicalDeviceGeneratedCommandsPropertiesNVX},
    {"vkCmdSetViewportWScalingNV", (void*)CmdSetViewportWScalingNV},
    {"vkReleaseDisplayEXT", (void*)ReleaseDisplayEXT},
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    {"vkAcquireXlibDisplayEXT", (void*)AcquireXlibDisplayEXT},
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    {"vkGetRandROutputDisplayEXT", (void*)GetRandROutputDisplayEXT},
#endif
    {"vkGetPhysicalDeviceSurfaceCapabilities2EXT", (void*)GetPhysicalDeviceSurfaceCapabilities2EXT},
    {"vkDisplayPowerControlEXT", (void*)DisplayPowerControlEXT},
    {"vkRegisterDeviceEventEXT", (void*)RegisterDeviceEventEXT},
    {"vkRegisterDisplayEventEXT", (void*)RegisterDisplayEventEXT},
    {"vkGetSwapchainCounterEXT", (void*)GetSwapchainCounterEXT},
    {"vkGetRefreshCycleDurationGOOGLE", (void*)GetRefreshCycleDurationGOOGLE},
    {"vkGetPastPresentationTimingGOOGLE", (void*)GetPastPresentationTimingGOOGLE},
    {"vkCmdSetDiscardRectangleEXT", (void*)CmdSetDiscardRectangleEXT},
    {"vkSetHdrMetadataEXT", (void*)SetHdrMetadataEXT},
#ifdef VK_USE_PLATFORM_IOS_MVK
    {"vkCreateIOSSurfaceMVK", (void*)CreateIOSSurfaceMVK},
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
    {"vkCreateMacOSSurfaceMVK", (void*)CreateMacOSSurfaceMVK},
#endif
    {"vkSetDebugUtilsObjectNameEXT", (void *)SetDebugUtilsObjectNameEXT},
    {"vkSetDebugUtilsObjectTagEXT", (void *)SetDebugUtilsObjectTagEXT},
    {"vkQueueBeginDebugUtilsLabelEXT", (void *)QueueBeginDebugUtilsLabelEXT},
    {"vkQueueEndDebugUtilsLabelEXT", (void *)QueueEndDebugUtilsLabelEXT},
    {"vkQueueInsertDebugUtilsLabelEXT", (void *)QueueInsertDebugUtilsLabelEXT},
    {"vkCmdBeginDebugUtilsLabelEXT", (void *)CmdBeginDebugUtilsLabelEXT},
    {"vkCmdEndDebugUtilsLabelEXT", (void *)CmdEndDebugUtilsLabelEXT},
    {"vkCmdInsertDebugUtilsLabelEXT", (void *)CmdInsertDebugUtilsLabelEXT},
    {"vkCreateDebugUtilsMessengerEXT", (void *)CreateDebugUtilsMessengerEXT},
    {"vkDestroyDebugUtilsMessengerEXT", (void *)DestroyDebugUtilsMessengerEXT},
    {"vkSubmitDebugUtilsMessageEXT", (void *)SubmitDebugUtilsMessageEXT},
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    {"vkGetAndroidHardwareBufferPropertiesANDROID", (void*)GetAndroidHardwareBufferPropertiesANDROID},
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    {"vkGetMemoryAndroidHardwareBufferANDROID", (void*)GetMemoryAndroidHardwareBufferANDROID},
#endif
    {"vkCmdSetSampleLocationsEXT", (void*)CmdSetSampleLocationsEXT},
    {"vkGetPhysicalDeviceMultisamplePropertiesEXT", (void*)GetPhysicalDeviceMultisamplePropertiesEXT},
    {"vkGetImageDrmFormatModifierPropertiesEXT", (void*)GetImageDrmFormatModifierPropertiesEXT},
    {"vkCreateValidationCacheEXT", (void*)CreateValidationCacheEXT},
    {"vkDestroyValidationCacheEXT", (void*)DestroyValidationCacheEXT},
    {"vkMergeValidationCachesEXT", (void*)MergeValidationCachesEXT},
    {"vkGetValidationCacheDataEXT", (void*)GetValidationCacheDataEXT},
    {"vkCmdBindShadingRateImageNV", (void*)CmdBindShadingRateImageNV},
    {"vkCmdSetViewportShadingRatePaletteNV", (void*)CmdSetViewportShadingRatePaletteNV},
    {"vkCmdSetCoarseSampleOrderNV", (void*)CmdSetCoarseSampleOrderNV},
    {"vkCreateAccelerationStructureNVX", (void*)CreateAccelerationStructureNVX},
    {"vkDestroyAccelerationStructureNVX", (void*)DestroyAccelerationStructureNVX},
    {"vkGetAccelerationStructureMemoryRequirementsNVX", (void*)GetAccelerationStructureMemoryRequirementsNVX},
    {"vkGetAccelerationStructureScratchMemoryRequirementsNVX", (void*)GetAccelerationStructureScratchMemoryRequirementsNVX},
    {"vkBindAccelerationStructureMemoryNVX", (void*)BindAccelerationStructureMemoryNVX},
    {"vkCmdBuildAccelerationStructureNVX", (void*)CmdBuildAccelerationStructureNVX},
    {"vkCmdCopyAccelerationStructureNVX", (void*)CmdCopyAccelerationStructureNVX},
    {"vkCmdTraceRaysNVX", (void*)CmdTraceRaysNVX},
    {"vkCreateRaytracingPipelinesNVX", (void*)CreateRaytracingPipelinesNVX},
    {"vkGetRaytracingShaderHandlesNVX", (void*)GetRaytracingShaderHandlesNVX},
    {"vkGetAccelerationStructureHandleNVX", (void*)GetAccelerationStructureHandleNVX},
    {"vkCmdWriteAccelerationStructurePropertiesNVX", (void*)CmdWriteAccelerationStructurePropertiesNVX},
    {"vkCompileDeferredNVX", (void*)CompileDeferredNVX},
    {"vkGetMemoryHostPointerPropertiesEXT", (void*)GetMemoryHostPointerPropertiesEXT},
    {"vkCmdWriteBufferMarkerAMD", (void*)CmdWriteBufferMarkerAMD},
    {"vkGetPhysicalDeviceCalibrateableTimeDomainsEXT", (void*)GetPhysicalDeviceCalibrateableTimeDomainsEXT},
    {"vkGetCalibratedTimestampsEXT", (void*)GetCalibratedTimestampsEXT},
    {"vkCmdDrawMeshTasksNV", (void*)CmdDrawMeshTasksNV},
    {"vkCmdDrawMeshTasksIndirectNV", (void*)CmdDrawMeshTasksIndirectNV},
    {"vkCmdDrawMeshTasksIndirectCountNV", (void*)CmdDrawMeshTasksIndirectCountNV},
    {"vkCmdSetExclusiveScissorNV", (void*)CmdSetExclusiveScissorNV},
    {"vkCmdSetCheckpointNV", (void*)CmdSetCheckpointNV},
    {"vkGetQueueCheckpointDataNV", (void*)GetQueueCheckpointDataNV},
#ifdef VK_USE_PLATFORM_FUCHSIA
    {"vkCreateImagePipeSurfaceFUCHSIA", (void*)CreateImagePipeSurfaceFUCHSIA},
#endif
};


} // namespace object_tracker
