/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation, NSArray, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerCallFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * callFrameId; 
@property (nonatomic,copy) NSString * functionName; 
@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (nonatomic,copy) NSArray * scopeChain; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * thisObject; 
@property (assign,nonatomic) char isTailDeleted; 
-(RWIProtocolDebuggerLocation *)location;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(NSString *)functionName;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setScopeChain:(NSArray *)arg1 ;
-(NSArray *)scopeChain;
-(void)setCallFrameId:(NSString *)arg1 ;
-(void)setThisObject:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setIsTailDeleted:(char)arg1 ;
-(id)initWithCallFrameId:(id)arg1 functionName:(id)arg2 location:(id)arg3 scopeChain:(id)arg4 thisObject:(id)arg5 isTailDeleted:(char)arg6 ;
-(NSString *)callFrameId;
-(RWIProtocolRuntimeRemoteObject *)thisObject;
-(char)isTailDeleted;
@end
