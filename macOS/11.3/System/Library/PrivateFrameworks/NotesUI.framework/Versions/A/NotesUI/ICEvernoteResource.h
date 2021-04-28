/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface ICEvernoteResource : NSObject <NSSecureCoding> {

	char _isAttachment;
	NSString* _mime;
	NSString* _fileName;
	NSData* _data;
	NSString* _md5Hash;
	double _imageWidth;
	double _imageHeight;
	double _duration;

}

@property (assign,nonatomic) char isAttachment;                //@synthesize isAttachment=_isAttachment - In the implementation block
@property (nonatomic,retain) NSString * mime;                  //@synthesize mime=_mime - In the implementation block
@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * md5Hash;               //@synthesize md5Hash=_md5Hash - In the implementation block
@property (assign,nonatomic) double imageWidth;                //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) double imageHeight;               //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) double duration;                  //@synthesize duration=_duration - In the implementation block
+(char)supportsSecureCoding;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fileName;
-(double)imageWidth;
-(double)imageHeight;
-(void)setImageWidth:(double)arg1 ;
-(void)setImageHeight:(double)arg1 ;
-(char)isAttachment;
-(void)setIsAttachment:(char)arg1 ;
-(NSString *)mime;
-(NSString *)md5Hash;
-(void)setMime:(NSString *)arg1 ;
-(void)setMd5Hash:(NSString *)arg1 ;
@end
