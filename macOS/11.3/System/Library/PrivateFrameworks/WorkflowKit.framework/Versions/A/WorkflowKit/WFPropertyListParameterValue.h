/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFParameterState.h>

@protocol WFParameterState;
@class NSString;

@interface WFPropertyListParameterValue : NSObject <NSCopying, WFParameterState> {

	long long _valueType;
	id<WFParameterState> _state;

}

@property (nonatomic,readonly) long long valueType;                     //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) id<WFParameterState> state;              //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForValueType:(long long)arg1 ;
+(id)defaultStateForValueType:(long long)arg1 ;
+(Class)processedClassForValueType:(long long)arg1 ;
+(id)localizedTitleForValueType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithArray:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id<WFParameterState>)state;
-(id)initWithString:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)serializedRepresentation;
-(long long)valueType;
-(id)initWithNumber:(id)arg1 ;
-(id)initWithType:(long long)arg1 state:(id)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithStringState:(id)arg1 ;
-(id)initWithDictionaryState:(id)arg1 ;
-(id)initWithArrayState:(id)arg1 ;
-(id)initWithNumberState:(id)arg1 ;
-(id)initWithBooleanState:(id)arg1 ;
-(id)initWithBoolean:(id)arg1 ;
@end

