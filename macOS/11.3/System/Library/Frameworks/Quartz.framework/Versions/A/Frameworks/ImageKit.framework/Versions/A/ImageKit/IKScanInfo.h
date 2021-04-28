/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface IKScanInfo : NSObject <NSCopying> {

	CGImageRef _icon;
	char _scanDone;
	NSURL* _url;
	NSString* _name;
	long long _percentageComplete;
	long long _pageCount;

}

@property (nonatomic,copy) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long percentageComplete;              //@synthesize percentageComplete=_percentageComplete - In the implementation block
@property (assign) long long pageCount;                                 //@synthesize pageCount=_pageCount - In the implementation block
@property (assign,nonatomic) char scanDone;                             //@synthesize scanDone=_scanDone - In the implementation block
-(void)updateIconWithCompletion:(/*^block*/id)arg1 ;
-(CGImageRef)createPlaceHolder;
-(void)setScanDone:(char)arg1 ;
-(char)scanDone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(char)isValid;
-(void)setName:(NSString *)arg1 ;
-(id)displayName;
-(NSURL *)url;
-(id)userData;
-(void)setUrl:(NSURL *)arg1 ;
-(CGImageRef)icon;
-(long long)pageCount;
-(void)setPageCount:(long long)arg1 ;
-(id)pageInfo;
-(char)showButton;
-(id)initWithURL:(id)arg1 name:(id)arg2 ;
-(long long)percentageComplete;
-(void)setPercentageComplete:(long long)arg1 ;
-(void)showInFinder:(id)arg1 ;
@end

