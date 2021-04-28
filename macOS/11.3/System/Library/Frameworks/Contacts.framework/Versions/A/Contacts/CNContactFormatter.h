/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersonNameComponentsFormatter;

@interface CNContactFormatter : NSFormatter <NSSecureCoding> {

	char _ignoresOrganization;
	char _ignoresNickname;
	char _emphasizesPrimaryNameComponent;
	NSPersonNameComponentsFormatter* _nameFormatter;
	long long _style;
	unsigned long long _fallbackStyle;
	long long _sortOrder;

}

@property (assign,nonatomic) char ignoresOrganization;                         //@synthesize ignoresOrganization=_ignoresOrganization - In the implementation block
@property (assign,nonatomic) char ignoresNickname;                             //@synthesize ignoresNickname=_ignoresNickname - In the implementation block
@property (assign,nonatomic) unsigned long long fallbackStyle;                 //@synthesize fallbackStyle=_fallbackStyle - In the implementation block
@property (assign,nonatomic) char emphasizesPrimaryNameComponent;              //@synthesize emphasizesPrimaryNameComponent=_emphasizesPrimaryNameComponent - In the implementation block
@property (assign,nonatomic) long long sortOrder;                              //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign) long long style;                                            //@synthesize style=_style - In the implementation block
+(char)supportsSecureCoding;
+(id)descriptorForRequiredKeysForStyle:(long long)arg1 ;
+(id)stringFromContact:(id)arg1 style:(long long)arg2 ;
+(long long)nameOrderForContact:(id)arg1 ;
+(id)attributedStringFromContact:(id)arg1 style:(long long)arg2 defaultAttributes:(id)arg3 ;
+(id)abbreviatedStringFromContact:(id)arg1 trimmingWhitespace:(char)arg2 ;
+(id)descriptorForRequiredKeysForNameOrder;
+(id)descriptorForRequiredKeysForDelimiter;
+(id)delimiterForContact:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(void)setStyle:(long long)arg1 ;
-(void)setSortOrder:(long long)arg1 ;
-(long long)sortOrder;
-(id)descriptorForRequiredKeys;
-(id)stringFromContact:(id)arg1 ;
-(id)attributedStringFromContact:(id)arg1 defaultAttributes:(id)arg2 ;
-(unsigned long long)fallbackStyle;
-(char)ignoresNickname;
-(void)setIgnoresNickname:(char)arg1 ;
-(char)ignoresOrganization;
-(void)setIgnoresOrganization:(char)arg1 ;
-(id)stringFromContact:(id)arg1 attributes:(id)arg2 ;
-(char)emphasizesPrimaryNameComponent;
-(void)setFallbackStyle:(unsigned long long)arg1 ;
-(void)setEmphasizesPrimaryNameComponent:(char)arg1 ;
-(id)stringFromPotentiallySuggestedContact:(id)arg1 relatedToProperty:(id)arg2 ;
@end

