/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFitnessMachineConnectionInitiator : NSObject <HKFitnessMachineConnectionInitiatorClientInterface> {
    NSUUID * _UUID;
    <_HKFitnessMachineConnectionInitiatorDelegate> * _delegate;
    HKHealthStore * _healthStore;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_HKFitnessMachineConnectionInitiatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HKHealthStore *healthStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UUID;
- (void)_connectionInterruptedWithError:(id)arg1;
- (id)_initWithHealthStore:(id)arg1;
- (void)_simulateAccept;
- (void)_simulateDisconnect;
- (void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)clientRemote_encounteredError:(id)arg1;
- (void)clientRemote_updatedConnectionState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)clientRemote_updatedFitnessMachine:(id)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)clientRemote_updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)clientRemote_workoutAppReady;
- (id)delegate;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1;
- (id)healthStore;
- (void)peformServerOperation:(id /* block */)arg1;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2;
- (void)registerClient;
- (void)setDelegate:(id)arg1;
- (void)setHealthStore:(id)arg1;

@end