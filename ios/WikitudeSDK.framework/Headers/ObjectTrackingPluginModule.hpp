//
//  ObjectTrackingPluginModule.hpp
//  WikitudeUniversalSDK
//
//  Created by Andreas Schacherbauer on 25.03.18.
//  Copyright © 2018 Wikitude. All rights reserved.
//

#ifndef ObjectTrackingPluginModule_hpp
#define ObjectTrackingPluginModule_hpp

#ifdef __cplusplus

#include "State.hpp"
#include "CompilerAttributes.hpp"
#include "TrackingPluginModule.hpp"


namespace wikitude {
    namespace sdk {
        namespace impl {
            class ManagedCameraFrame;
<<<<<<< HEAD
        }
        using impl::ManagedCameraFrame;
=======
            class ObjectTracker;
        }
        using impl::ManagedCameraFrame;
        using impl::ObjectTracker;
>>>>>>> 7a80d517418492d323a2b0529e1da11bec307318
    }
}

namespace wikitude { namespace sdk {

    namespace impl {


        class WT_EXPORT_API ObjectTrackingPluginModule : public TrackingPluginModule {
        public:
            virtual ~ObjectTrackingPluginModule() = default;

<<<<<<< HEAD
            virtual universal_sdk::ObjectState getTrackingState() const = 0;
=======
            virtual universal_sdk::ObjectState getTrackingState(sdk::ObjectTracker& objectTracker_) const = 0;
>>>>>>> 7a80d517418492d323a2b0529e1da11bec307318
            virtual sdk::Matrix4 getViewMatrix() const = 0;
        };
    }
    using impl::ObjectTrackingPluginModule;
}}

#endif /* __cplusplus */

#endif /* ObjectTrackingPluginModule_hpp */
