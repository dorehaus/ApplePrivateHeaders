/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/Versions/A/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@protocol OS_dispatch_queue;
@class NSObject, AUV2BridgeBusArray, AUParameterTree;

@interface AUAudioUnitV2Bridge : AUAudioUnit {

	NSObject*<OS_dispatch_queue> _eventListenerQueue;
	AUListenerBaseRef _eventListener;
	AUListenerBaseRef _parameterListener;
	BOOL _removingObserverWithContext;
	atomic<bool> _willSetFullState;
	atomic<unsigned int> _eventsTriggeringParameterTreeInvalidation;
	NSObject*<OS_dispatch_queue> _parameterTreeRebuildQueue;
	OpaqueAudioComponentInstanceRef _audioUnit;
	BOOL _audioUnitIsOwned;
	AUV2BridgeBusArray* _inputBusses;
	AUV2BridgeBusArray* _outputBusses;
	AUParameterTree* _cachedParameterTree;
	unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>>* _renderer;
	/*^block*/id _MIDIOutputEventBlock;

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)inputBusses;
-(id)outputBusses;
-(void)setMusicalContextBlock:(/*^block*/id)arg1 ;
-(void)setTransportStateBlock:(/*^block*/id)arg1 ;
-(char)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(void)internalDeallocateRenderResources;
-(/*^block*/id)internalRenderBlock;
-(id)parameterTree;
-(char)providesUserInterface;
-(void)setFullState:(id)arg1 ;
-(void)setFullStateForDocument:(id)arg1 ;
-(void)setCurrentPreset:(id)arg1 ;
-(id)_valueForProperty:(id)arg1 error:(id*)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)invalidateAudioUnit;
-(void)deliverV2Parameters:(const AURenderEvent*)arg1 ;
-(id)channelCapabilities;
-(id)osWorkgroup;
-(/*^block*/id)MIDIOutputEventBlock;
-(void)setMIDIOutputEventBlock:(/*^block*/id)arg1 ;
-(char)_setElementCount:(unsigned)arg1 count:(unsigned)arg2 error:(id*)arg3 ;
-(char)_elementCountWritable:(unsigned)arg1 ;
-(int)enableBus:(unsigned)arg1 scope:(unsigned)arg2 enable:(char)arg3 ;
-(unsigned)_elementCount:(unsigned)arg1 ;
-(void)_rebuildBusses:(unsigned)arg1 ;
-(void)_notifyParameterChange:(unsigned long long)arg1 ;
-(id)_buildNewParameterTree;
-(void)_invalidateParameterTree:(unsigned)arg1 ;
-(void)init2;
-(id)initWithAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 description:(AudioComponentDescription)arg2 ;
-(void)_createEventListenerQueue;
-(id)_createParameterTree;
@end

