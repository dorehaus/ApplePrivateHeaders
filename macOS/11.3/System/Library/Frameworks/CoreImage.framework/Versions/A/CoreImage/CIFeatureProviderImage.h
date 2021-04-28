/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSString, NSSet;

@interface CIFeatureProviderImage : NSObject <MLFeatureProvider> {

	NSString* name;
	CVBufferRef buffer;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) CVBufferRef buffer; 
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)initWithName:(id)arg1 buffer:(CVBufferRef)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CVBufferRef)buffer;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setBuffer:(CVBufferRef)arg1 ;
@end
