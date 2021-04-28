/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSKSearch : NSObject {

	char _isComplete;
	NSString* _string;
	unsigned long long _options;
	/*^block*/id _hitBlock;

}

@property (nonatomic,copy) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id hitBlock;                               //@synthesize hitBlock=_hitBlock - In the implementation block
@property (assign,nonatomic) char isComplete;                         //@synthesize isComplete=_isComplete - In the implementation block
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(char)isComplete;
-(void)setIsComplete:(char)arg1 ;
-(void)setHitBlock:(id)arg1 ;
-(id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3 ;
-(id)hitBlock;
@end

