/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSArray, BSObjCArgument;

@interface BSObjCMethod : NSObject <BSDescriptionProviding> {

	long long _required;
	NSString* _name;
	NSString* _encoding;
	SEL _selector;
	NSArray* _arguments;
	BSObjCArgument* _returnValue;

}

@property (nonatomic,copy,readonly) NSString * encoding;                           //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) SEL selector;                                       //@synthesize selector=_selector - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) BSObjCArgument * returnValue;                //@synthesize returnValue=_returnValue - In the implementation block
@property (nonatomic,retain,readonly) NSArray * arguments;                         //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,retain,readonly) BSObjCArgument * firstArgument; 
@property (nonatomic,retain,readonly) BSObjCArgument * lastArgument; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(SEL)selector;
-(NSArray *)arguments;
-(NSString *)encoding;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BSObjCArgument *)returnValue;
-(BSObjCArgument *)firstArgument;
-(BSObjCArgument *)lastArgument;
@end

