/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCColor;

@interface FCContentColorPair : NSObject {

	FCColor* _lightColor;
	FCColor* _darkColor;

}

@property (nonatomic,copy,readonly) FCColor * lightColor;              //@synthesize lightColor=_lightColor - In the implementation block
@property (nonatomic,copy,readonly) FCColor * darkColor;               //@synthesize darkColor=_darkColor - In the implementation block
-(FCColor *)lightColor;
-(FCColor *)darkColor;
-(id)initWithLightColor:(id)arg1 darkColor:(id)arg2 ;
@end

