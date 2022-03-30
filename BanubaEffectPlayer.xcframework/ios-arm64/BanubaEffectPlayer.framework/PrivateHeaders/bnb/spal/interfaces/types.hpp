#pragma once

#include <bnb/spal/interfaces/all.hpp>
#include <memory>

namespace bnb::interfaces
{
    using frames_provider_sptr = std::shared_ptr<frames_provider>;
    using frames_provider_wptr = std::weak_ptr<frames_provider>;
    using frames_provider_uptr = std::unique_ptr<frames_provider>;
    using frames_provider_ptr = bnb::interfaces::frames_provider*;

    using haptic_sptr = std::shared_ptr<haptic>;
    using haptic_wptr = std::weak_ptr<haptic>;
    using haptic_uptr = std::unique_ptr<haptic>;
    using haptic_ptr = bnb::interfaces::haptic*;

}
