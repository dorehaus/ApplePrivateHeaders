/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _PSSuggestionProxy : NSObject <NSSecureCoding> {

	char _useGroupsWhenFindingRecipient;
	NSString* _bundleID;
	NSString* _interactionRecipients;
	NSString* _contactID;
	NSString* _handle;
	NSString* _reason;
	NSString* _reasonType;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * interactionRecipients;              //@synthesize interactionRecipients=_interactionRecipients - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactID;                          //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                             //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                             //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSString * reasonType;                         //@synthesize reasonType=_reasonType - In the implementation block
@property (nonatomic,readonly) char useGroupsWhenFindingRecipient;                 //@synthesize useGroupsWhenFindingRecipient=_useGroupsWhenFindingRecipient - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionKey; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSString *)bundleID;
-(NSString *)contactID;
-(NSString *)reasonType;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 reason:(id)arg4 reasonType:(id)arg5 ;
-(NSString *)interactionRecipients;
-(char)useGroupsWhenFindingRecipient;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 ;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 useGroupsWhenFindingRecipient:(char)arg7 ;
-(NSString *)suggestionKey;
@end
