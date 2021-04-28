/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BrightnessControl.framework/Versions/A/BrightnessControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue;
#import <BrightnessControl/BrightnessControl-Structs.h>
@class NSObject, NSString, NSMutableDictionary, NSUUID, NSDictionary;

@interface BCBrtControl : NSObject {

	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _id;
	char _isValid;
	NSMutableDictionary* _capabilities;
	double _maxNits;
	double _midNits;
	double _minNits;
	NSUUID* _containerID;
	const CFUUIDRef _cfContainerID;
	unsigned _displayService;
	char _multipleControlEnabled;
	/*^block*/id _displayInvalidHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) NSObject*<OS_os_log> logHandle; 
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
@property (readonly) const CFUUIDRef cfContainerID; 
@property (readonly) NSUUID * containerID;                                  //@synthesize containerID=_containerID - In the implementation block
@property (readonly) double maxNits;                                        //@synthesize maxNits=_maxNits - In the implementation block
@property (readonly) double minNits;                                        //@synthesize minNits=_minNits - In the implementation block
@property (copy,readonly) id ID; 
@property (readonly) NSDictionary * capabilities;                           //@synthesize capabilities=_capabilities - In the implementation block
@property (assign) char multipleControlEnabled;                             //@synthesize multipleControlEnabled=_multipleControlEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) char isValid;                                          //@synthesize isValid=_isValid - In the implementation block
@property (copy) id displayInvalidHandler;                                  //@synthesize displayInvalidHandler=_displayInvalidHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(id)newMonitorWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(id)copyAvailableControls;
+(id)newMonitorForAllControlsWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(id)copyAllAvailableControls;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(char)isValid;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUUID *)containerID;
-(NSDictionary *)capabilities;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)ID;
-(NSObject*<OS_os_log>)logHandle;
-(id)copyProperty:(id)arg1 error:(id*)arg2 ;
-(id)displayInvalidHandler;
-(void)_runOnCallbackQueue:(/*^block*/id)arg1 ;
-(char)_checkIsValid:(id*)arg1 ;
-(id)copyModuleIdentifier;
-(char)setNits:(double)arg1 error:(id*)arg2 ;
-(double)getNitsWithError:(id*)arg1 ;
-(char)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(void)setDisplayService:(unsigned)arg1 ;
-(const CFUUIDRef)cfContainerID;
-(void)setNitsAsync:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPropertyAync:(id)arg1 value:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)maxNits;
-(double)minNits;
-(char)multipleControlEnabled;
-(void)setMultipleControlEnabled:(char)arg1 ;
-(void)setDisplayInvalidHandler:(id)arg1 ;
@end

