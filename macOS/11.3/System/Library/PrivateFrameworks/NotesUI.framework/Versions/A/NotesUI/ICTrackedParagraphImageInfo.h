/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@class ICTrackedParagraph, NSString, NSImage, NSImageView;

@interface ICTrackedParagraphImageInfo : NSObject {

	char _estimated;
	ICTrackedParagraph* _trackedParagraph;
	NSString* _uuid;
	NSImage* _image;
	NSImageView* _imageViewIfExists;
	CGRect _boundingRect;
	CGRect _rect;

}

@property (nonatomic,retain) ICTrackedParagraph * trackedParagraph;              //@synthesize trackedParagraph=_trackedParagraph - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSImage * image;                                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGRect boundingRect;                                //@synthesize boundingRect=_boundingRect - In the implementation block
@property (assign,nonatomic) CGRect rect;                                        //@synthesize rect=_rect - In the implementation block
@property (nonatomic,retain) NSImageView * imageViewIfExists;                    //@synthesize imageViewIfExists=_imageViewIfExists - In the implementation block
@property (assign,nonatomic) char estimated;                                     //@synthesize estimated=_estimated - In the implementation block
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(NSImage *)image;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(CGRect)boundingRect;
-(ICTrackedParagraph *)trackedParagraph;
-(void)setTrackedParagraph:(ICTrackedParagraph *)arg1 ;
-(void)setBoundingRect:(CGRect)arg1 ;
-(NSImageView *)imageViewIfExists;
-(void)setImageViewIfExists:(NSImageView *)arg1 ;
-(char)estimated;
-(void)setEstimated:(char)arg1 ;
@end
