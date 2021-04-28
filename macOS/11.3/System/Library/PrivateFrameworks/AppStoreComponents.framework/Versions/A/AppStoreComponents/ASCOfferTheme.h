/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/Versions/A/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSColor;

@interface ASCOfferTheme : NSObject <NSSecureCoding, NSCopying> {

	NSColor* _titleBackgroundColor;
	NSColor* _titleTextColor;
	NSColor* _subtitleTextColor;
	NSColor* _iconTintColor;
	NSColor* _progressColor;

}

@property (nonatomic,readonly) NSColor * titleBackgroundColor;              //@synthesize titleBackgroundColor=_titleBackgroundColor - In the implementation block
@property (nonatomic,readonly) NSColor * titleTextColor;                    //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,readonly) NSColor * subtitleTextColor;                 //@synthesize subtitleTextColor=_subtitleTextColor - In the implementation block
@property (nonatomic,readonly) NSColor * iconTintColor;                     //@synthesize iconTintColor=_iconTintColor - In the implementation block
@property (nonatomic,readonly) NSColor * progressColor;                     //@synthesize progressColor=_progressColor - In the implementation block
+(char)supportsSecureCoding;
+(id)grayTheme;
+(id)blueTheme;
+(id)loadingTheme;
+(id)confirmationForTheme:(id)arg1 ;
+(id)adTheme;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSColor *)titleBackgroundColor;
-(NSColor *)titleTextColor;
-(NSColor *)iconTintColor;
-(NSColor *)progressColor;
-(NSColor *)subtitleTextColor;
-(id)initWithTitleBackgroundColor:(id)arg1 titleTextColor:(id)arg2 subtitleTextColor:(id)arg3 iconTintColor:(id)arg4 progressColor:(id)arg5 ;
@end
