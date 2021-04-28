/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/Versions/A/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFWebPageProtocol.h>

@protocol WFWebPageProtocol;
@class NSObject, WFImgArrayCache, NSString;

@interface WFWebPageDecorator : NSObject <WFWebPageProtocol> {

	NSObject*<WFWebPageProtocol> webPageStripper;
	WFImgArrayCache* pageImagesPropertyCache;
	NSString* URLString;

}

@property (retain) NSString * URLString; 
+(id)webPageWithString:(id)arg1 URLString:(id)arg2 ;
+(id)_plainTextWithSelector:(SEL)arg1 object:(id)arg2 ;
+(id)plainTextWithWebPageData:(id)arg1 ;
+(id)plainTextWithWebPageString:(id)arg1 ;
+(id)webPageWithData:(id)arg1 ;
+(id)webPageWithData:(id)arg1 URLString:(id)arg2 ;
+(id)webPageWithString:(id)arg1 ;
-(id)pageContent;
-(long long)numberOfKnownImagePixels;
-(long long)numberOfUnknownSizedImages;
-(id)metaTagDescription;
-(id)metaTagKeywords;
-(id)metaTagsLabeled;
-(id)metaTagsUnlabeled;
-(id)scriptBlocks;
-(char)hasFrameset;
-(char)hasShortRefresh;
-(id)initWithWebPageData:(id)arg1 ;
-(id)initWithWebPageString:(id)arg1 ;
-(id)initWithWebPageStripper:(id)arg1 ;
-(void)_cacheImgProperties;
-(id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2 weight:(int)arg3 ;
-(id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2 ;
-(id)imageAltsText;
-(id)rawPlainText;
-(id)linkTitlesText;
-(void)dealloc;
-(long long)wordCount;
-(id)tags;
-(id)links;
-(id)images;
-(long long)numberOfImages;
-(NSString *)URLString;
-(id)pageTitle;
-(id)plainText;
-(void)setURLString:(NSString *)arg1 ;
@end
