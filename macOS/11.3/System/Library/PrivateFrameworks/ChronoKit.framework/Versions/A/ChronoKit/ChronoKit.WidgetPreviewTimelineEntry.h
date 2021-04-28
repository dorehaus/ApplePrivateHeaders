/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ChronoKit.framework/Versions/A/ChronoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Timeline/TLTimelineBlobEntry.h>
#import <libobjc.A.dylib/TLPreviewTimelineEntry.h>

@class NSArray;

@interface ChronoKit.WidgetPreviewTimelineEntry : TLTimelineBlobEntry <TLPreviewTimelineEntry> {

	 tl_errors;
	 tl_selectableRegions;
	 backgroundColor;

}

@property (copy,nonatomic) NSArray * tl_errors; 
@property (copy,nonatomic) NSArray * tl_selectableRegions; 
@property (readonly,nonatomic) long long hash; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBlob:(id)arg1 atDate:(id)arg2 ;
-(NSArray *)tl_errors;
-(void)setTl_errors:(NSArray *)arg1 ;
-(NSArray *)tl_selectableRegions;
-(void)setTl_selectableRegions:(NSArray *)arg1 ;
@end

