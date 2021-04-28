/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSMutableArray, NSObject, NSString;

@interface NEFileHandleMaintainer : NSObject {

	char _changed;
	char _isOwnerMode;
	NSMutableArray* _fileHandles;
	/*^block*/id _receivedHandlesCallback;
	NSObject*<OS_xpc_object> _auxiliaryDataDictionary;
	NSString* _eventName;

}

@property (retain) NSMutableArray * fileHandles;                                  //@synthesize fileHandles=_fileHandles - In the implementation block
@property (assign) char changed;                                                  //@synthesize changed=_changed - In the implementation block
@property (copy) id receivedHandlesCallback;                                      //@synthesize receivedHandlesCallback=_receivedHandlesCallback - In the implementation block
@property (assign) char isOwnerMode;                                              //@synthesize isOwnerMode=_isOwnerMode - In the implementation block
@property (retain) NSObject*<OS_xpc_object> auxiliaryDataDictionary;              //@synthesize auxiliaryDataDictionary=_auxiliaryDataDictionary - In the implementation block
@property (retain) NSString * eventName;                                          //@synthesize eventName=_eventName - In the implementation block
+(id)sharedMaintainer;
-(char)isOwnerMode;
-(id)receivedHandlesCallback;
-(NSMutableArray *)fileHandles;
-(void)setFileHandles:(NSMutableArray *)arg1 ;
-(void)setAuxiliaryDataDictionary:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setReceivedHandlesCallback:(id)arg1 ;
-(void)resetFileHandlesFromEvent:(id)arg1 ;
-(void)setIsOwnerMode:(char)arg1 ;
-(NSObject*<OS_xpc_object>)auxiliaryDataDictionary;
-(id)init;
-(void)commit;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(char)changed;
-(void)setChanged:(char)arg1 ;
-(void)iterateFileHandlesWithBlock:(/*^block*/id)arg1 ;
-(void)setFileHandle:(id)arg1 matchingPredicate:(/*^block*/id)arg2 ;
-(void)removeFileHandleMatchingPredicate:(/*^block*/id)arg1 ;
-(id)createEvent;
-(void)startOwnerModeWithEventName:(id)arg1 handlesReceivedCallback:(/*^block*/id)arg2 ;
-(void)setAuxiliaryData:(id)arg1 forKey:(id)arg2 ;
-(id)copyAuxiliaryDataForKey:(id)arg1 ;
@end

