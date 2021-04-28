/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TMCopyEngineDelegate;
#import <TimeMachine/TimeMachine-Structs.h>
@class NSString, NSError;

@interface TMCopyEngine : NSObject {

	unsigned _operationKind;
	unsigned _reportInterval;
	unsigned _options;
	id<TMCopyEngineDelegate> _delegate;
	NSString* _operationName;
	NSString* _destinationName;
	NSError* _nodeOperationError;

}

@property (copy,readonly) NSString * operationName;                //@synthesize operationName=_operationName - In the implementation block
@property (copy,readonly) NSString * destinationName;              //@synthesize destinationName=_destinationName - In the implementation block
@property (readonly) unsigned operationKind;                       //@synthesize operationKind=_operationKind - In the implementation block
@property (readonly) unsigned reportInterval;                      //@synthesize reportInterval=_reportInterval - In the implementation block
@property (readonly) unsigned options;                             //@synthesize options=_options - In the implementation block
@property (retain) NSError * nodeOperationError;                   //@synthesize nodeOperationError=_nodeOperationError - In the implementation block
@property (__weak) id<TMCopyEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(SCD_Struct_TM9*)_copyCallbacksForDelegate:(id)arg1 ;
-(id<TMCopyEngineDelegate>)delegate;
-(void)setDelegate:(id<TMCopyEngineDelegate>)arg1 ;
-(unsigned)options;
-(NSString *)destinationName;
-(NSString *)operationName;
-(unsigned)operationKind;
-(unsigned)reportInterval;
-(NSError *)nodeOperationError;
-(id)initWithOperationName:(id)arg1 kind:(unsigned)arg2 destinationName:(id)arg3 reportInterval:(unsigned)arg4 options:(unsigned)arg5 ;
-(char)copySourceURL:(id)arg1 toDestinationURL:(id)arg2 error:(id*)arg3 ;
-(void)setNodeOperationError:(NSError *)arg1 ;
@end
