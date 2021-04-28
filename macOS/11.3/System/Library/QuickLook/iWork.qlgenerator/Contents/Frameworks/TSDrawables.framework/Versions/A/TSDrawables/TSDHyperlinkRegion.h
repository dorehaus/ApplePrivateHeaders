/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, TSUBezierPath;

@interface TSDHyperlinkRegion : NSObject {

	NSURL* mURL;
	TSUBezierPath* mBezierPath;

}

@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) TSUBezierPath * bezierPath; 
+(id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(TSUBezierPath *)bezierPath;
-(id)initWithURL:(id)arg1 bezierPath:(id)arg2 ;
-(void)setBezierPath:(TSUBezierPath *)arg1 ;
@end

