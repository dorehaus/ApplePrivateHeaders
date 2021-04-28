/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSImage;

@interface IKImageGridItem : NSObject {

	NSString* _path;
	long long _scaleMode;
	NSImage* _image;
	NSString* _title;
	char _useQLCache;

}

@property (retain) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (assign) long long scaleMode;              //@synthesize scaleMode=_scaleMode - In the implementation block
@property (retain) NSImage * image;                  //@synthesize image=_image - In the implementation block
@property (retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (assign) char useQLCache;                  //@synthesize useQLCache=_useQLCache - In the implementation block
+(id)itemWithImage:(id)arg1 ;
+(id)itemWithPath:(id)arg1 ;
-(void)setUseQLCache:(char)arg1 ;
-(char)useQLCache;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSString *)title;
-(NSImage *)image;
-(id)initWithImage:(id)arg1 ;
-(id)imageUID;
-(id)imageRepresentationType;
-(id)imageRepresentation;
-(id)imageTitle;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
@end

