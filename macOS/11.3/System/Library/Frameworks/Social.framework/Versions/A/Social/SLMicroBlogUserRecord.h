/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface SLMicroBlogUserRecord : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _screen_name;
	NSString* _profile_image_url;
	UIImage* _profileImageCache;

}

@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * screen_name;                    //@synthesize screen_name=_screen_name - In the implementation block
@property (nonatomic,retain) NSString * profile_image_url;              //@synthesize profile_image_url=_profile_image_url - In the implementation block
@property (retain) UIImage * profileImageCache;                         //@synthesize profileImageCache=_profileImageCache - In the implementation block
+(char)supportsSecureCoding;
+(id)userRecordWithDictionaryRepresentation:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setValuesWithUserDictionary:(id)arg1 ;
-(void)setScreen_name:(NSString *)arg1 ;
-(void)setProfile_image_url:(NSString *)arg1 ;
-(NSString *)screen_name;
-(NSString *)profile_image_url;
-(UIImage *)profileImageCache;
-(void)setProfileImageCache:(UIImage *)arg1 ;
@end

