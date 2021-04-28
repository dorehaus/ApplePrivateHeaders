/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class CNSocialProfile;

@interface AKSocialProfileValueTransformer : NSValueTransformer {

	CNSocialProfile* _lastSocialProfile;

}

@property (nonatomic,retain) CNSocialProfile * lastSocialProfile;              //@synthesize lastSocialProfile=_lastSocialProfile - In the implementation block
+(char)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(void)setLastSocialProfile:(CNSocialProfile *)arg1 ;
-(id)_usernameFromProfile:(id)arg1 ;
-(id)_serviceFromDisplayValue:(id)arg1 ;
-(id)_usernameFromDisplayValue:(id)arg1 service:(id)arg2 ;
-(id)_urlStringFromDisplayValue:(id)arg1 service:(id)arg2 username:(id)arg3 ;
-(CNSocialProfile *)lastSocialProfile;
@end

