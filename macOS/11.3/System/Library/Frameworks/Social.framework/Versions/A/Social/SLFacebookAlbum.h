/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SLFacebookAlbum : NSObject <NSSecureCoding> {

	char _canUpload;
	char _isDefaultAlbum;
	NSString* _identifier;
	NSString* _name;
	NSString* _coverPhotoIdentifier;
	long long _count;

}

@property (retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (retain) NSString * coverPhotoIdentifier;              //@synthesize coverPhotoIdentifier=_coverPhotoIdentifier - In the implementation block
@property (assign) long long count;                              //@synthesize count=_count - In the implementation block
@property (assign) char canUpload;                               //@synthesize canUpload=_canUpload - In the implementation block
@property (assign) char isDefaultAlbum;                          //@synthesize isDefaultAlbum=_isDefaultAlbum - In the implementation block
+(char)supportsSecureCoding;
+(id)albumWithDataDictionary:(id)arg1 ;
+(id)albumsWithAlbumDataDictionaries:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCount:(long long)arg1 ;
-(void)setCoverPhotoIdentifier:(NSString *)arg1 ;
-(void)setCanUpload:(char)arg1 ;
-(void)setIsDefaultAlbum:(char)arg1 ;
-(NSString *)coverPhotoIdentifier;
-(char)canUpload;
-(char)isDefaultAlbum;
@end

