/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSInputAlignmentGuide.h>

@protocol NSInputAlignmentGuide <NSObject>
@required
-(long long)guideType;
-(id)referenceValues;

@end


@class NSArray, NSString;

@interface NSInputAlignmentGuide : NSObject <NSInputAlignmentGuide> {

	long long _guideType;
	NSArray* _referenceValues;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)guideWithType:(long long)arg1 referenceValues:(id)arg2 ;
+(id)guidesBorderingRect:(CGRect)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)initWithType:(long long)arg1 referenceValues:(id)arg2 ;
-(long long)guideType;
-(id)referenceValues;
@end

