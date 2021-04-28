/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWTimeSkew : NSObject {

	SCD_Struct_Fi8 _native;
	SCD_Struct_Fi8 _original;
	SCD_Struct_Fi8 _adjusted;
	char _isBracketFrame;
	char _isSISFrame;
	char _isStartOfDiscontinuity;

}

@property (nonatomic,readonly) SCD_Struct_Fi8 native;                  //@synthesize native=_native - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi8 original;                //@synthesize original=_original - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi8 adjusted;                  //@synthesize adjusted=_adjusted - In the implementation block
@property (nonatomic,readonly) char isBracketFrame;                    //@synthesize isBracketFrame=_isBracketFrame - In the implementation block
@property (nonatomic,readonly) char isSISFrame;                        //@synthesize isSISFrame=_isSISFrame - In the implementation block
@property (assign,nonatomic) char isStartOfDiscontinuity;              //@synthesize isStartOfDiscontinuity=_isStartOfDiscontinuity - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(SCD_Struct_Fi8)original;
-(SCD_Struct_Fi8)native;
-(id)initWithNativeTime:(SCD_Struct_Fi8)arg1 originalTime:(SCD_Struct_Fi8)arg2 isBracketFrame:(char)arg3 isSISFrame:(char)arg4 ;
-(SCD_Struct_Fi8)adjusted;
-(void)setAdjusted:(SCD_Struct_Fi8)arg1 ;
-(char)isBracketFrame;
-(char)isSISFrame;
-(char)isStartOfDiscontinuity;
-(void)setIsStartOfDiscontinuity:(char)arg1 ;
@end
