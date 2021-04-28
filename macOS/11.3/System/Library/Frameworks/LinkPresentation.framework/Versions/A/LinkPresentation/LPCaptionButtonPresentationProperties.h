/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, LPImage;

@interface LPCaptionButtonPresentationProperties : NSObject {

	NSString* _text;
	LPImage* _icon;
	/*^block*/id _callback;
	long long _type;

}

@property (nonatomic,copy) NSString * text;               //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) LPImage * icon;              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) id callback;                   //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setIcon:(LPImage *)arg1 ;
-(LPImage *)icon;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end
