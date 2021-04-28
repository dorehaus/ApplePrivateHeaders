/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMenuItem;

@interface CSKMenuItemRepresentation : NSObject {

	NSString* _property;
	NSMenuItem* _parentMenuItem;
	NSString* _groupIdentifier;
	id _value;

}

@property (nonatomic,readonly) NSString * property;                           //@synthesize property=_property - In the implementation block
@property (assign,nonatomic,__weak) NSMenuItem * parentMenuItem;              //@synthesize parentMenuItem=_parentMenuItem - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                      //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) id value;                                        //@synthesize value=_value - In the implementation block
-(id)init;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)property;
-(id)initWithProperty:(id)arg1 ;
-(NSMenuItem *)parentMenuItem;
-(void)setParentMenuItem:(NSMenuItem *)arg1 ;
@end

