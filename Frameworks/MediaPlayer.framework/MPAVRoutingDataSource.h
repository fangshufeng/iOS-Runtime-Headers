/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingDataSource : NSObject {
    bool  _devicePresenceDetected;
    long long  _discoveryMode;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) bool devicePresenceDetected;
@property (nonatomic) long long discoveryMode;
@property (nonatomic, readonly) bool supportsMultipleSelection;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_superclassRegisterNotifications;
- (void)_superclassUnregisterNotifications;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (long long)discoveryMode;
- (void)getExternalScreenTypeWithCompletion:(id /* block */)arg1;
- (void)getPickedRouteHasVolumeControlWithCompletion:(id /* block */)arg1;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (bool)routeIsLeaderOfEndpoint:(id)arg1;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(id /* block */)arg3;
- (bool)supportsMultipleSelection;
- (void)unpickAirPlayAVRoutesWithCompletion:(id /* block */)arg1;

@end
