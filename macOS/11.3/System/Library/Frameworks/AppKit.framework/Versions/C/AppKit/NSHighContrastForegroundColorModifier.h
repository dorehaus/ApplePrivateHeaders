/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSDynamicColorModifier.h>

@class NSString;

@interface NSHighContrastForegroundColorModifier : NSObject <NSDynamicColorModifier> {

	double _luminanceThreshold;

}

@property (assign) double luminanceThreshold;                       //@synthesize luminanceThreshold=_luminanceThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)colorByApplyingToColor:(id)arg1 ;
-(id)initWithLuminanceThreshold:(double)arg1 ;
-(double)luminanceThreshold;
-(void)setLuminanceThreshold:(double)arg1 ;
@end

