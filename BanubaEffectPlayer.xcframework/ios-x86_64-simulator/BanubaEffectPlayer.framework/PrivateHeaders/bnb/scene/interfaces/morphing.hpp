/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <memory>
#include <string>

namespace bnb { namespace interfaces {

class mesh;
enum class morphing_type;

/**Class, represents morphing resources */
class BNB_EXPORT morphing {
public:
    virtual ~morphing() {}

    /**@return morphing type (morphing_type) */
    virtual morphing_type get_type() const = 0;

    /**@return morphing name (string) */
    virtual std::string get_name() const = 0;

    /**
     *sets morphing warp mesh. If morhping type is beauty must be only "$builtin$meshes/beauty" mesh.
     *@param mesh (mesh): morphing warp mesh
     */
    virtual void set_warp_mesh(const std::shared_ptr<mesh> & mesh) = 0;

    /**@return warp (mesh) */
    virtual std::shared_ptr<mesh> get_warp_mesh() const = 0;
};

} }  // namespace bnb::interfaces
/// @}
