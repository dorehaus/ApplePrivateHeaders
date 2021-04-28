/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/Versions/A/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDictionary, NSString, NSOrderedSet, NSSet;

@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding> {

	NSDictionary* _servicesByIdentifier;
	NSString* _identifier;
	NSString* _machName;
	NSOrderedSet* _orderedServices;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * machName;                //@synthesize machName=_machName - In the implementation block
@property (nonatomic,copy,readonly) NSSet * services; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(NSString *)identifier;
-(NSSet *)services;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)serviceForIdentifier:(id)arg1 ;
-(NSString *)machName;
@end

