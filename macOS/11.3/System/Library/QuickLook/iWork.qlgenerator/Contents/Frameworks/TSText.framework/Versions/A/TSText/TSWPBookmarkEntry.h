/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol TSWPBookmarkEntry <NSObject>
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * key; 
@required
-(NSString *)displayName;
-(NSURL *)url;
-(NSRange)range;
-(NSString *)key;

@end

