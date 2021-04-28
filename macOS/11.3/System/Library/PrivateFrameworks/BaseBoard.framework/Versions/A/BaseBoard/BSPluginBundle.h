/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSBundle, NSString;

@interface BSPluginBundle : NSObject <BSDescriptionProviding> {

	NSBundle* _bundle;
	NSString* _specifiedClassName;
	NSString* _requiredClassOrProtocolName;
	NSString* _identifier;
	NSString* _name;
	NSString* _type;
	Class _principalClass;

}

@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) char loaded; 
@property (nonatomic,readonly) Class principalClass;                     //@synthesize principalClass=_principalClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)name;
-(char)isValid;
-(NSString *)type;
-(NSString *)identifier;
-(Class)principalClass;
-(char)isLoaded;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(char)loadPlugin:(/*^block*/id)arg1 ;
-(char)loadPlugin;
@end
