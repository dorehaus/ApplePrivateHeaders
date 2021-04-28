/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/Versions/A/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHSWidget, CHSWidgetMetrics;

@interface CHSWidgetKey : NSObject <NSCopying, NSSecureCoding> {

	CHSWidget* _widget;
	CHSWidgetMetrics* _metrics;

}

@property (nonatomic,readonly) CHSWidget * widget;                      //@synthesize widget=_widget - In the implementation block
@property (nonatomic,readonly) CHSWidgetMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CHSWidgetMetrics *)metrics;
-(CHSWidget *)widget;
-(id)initWithWidget:(id)arg1 metrics:(id)arg2 ;
@end

