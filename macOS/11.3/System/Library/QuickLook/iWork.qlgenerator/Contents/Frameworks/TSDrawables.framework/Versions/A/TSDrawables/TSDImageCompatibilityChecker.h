/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDMediaCompatibilityChecker.h>

@class NSError, TSPData, NSString;

@interface TSDImageCompatibilityChecker : NSObject <TSDMediaCompatibilityChecker> {

	TSPData* mImageData;
	long long mCompatibilityLevel;
	NSError* mError;
	Ac mCancelled;

}

@property (getter=isCancelled,nonatomic,readonly) char cancelled; 
@property (nonatomic,readonly) long long compatibilityLevel; 
@property (nonatomic,readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)platformSupportsHEIF;
-(NSError *)error;
-(void)cancel;
-(char)isCancelled;
-(id)initWithImageData:(id)arg1 ;
-(void)checkCompatibilityUpToLevel:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)compatibilityLevel;
@end

