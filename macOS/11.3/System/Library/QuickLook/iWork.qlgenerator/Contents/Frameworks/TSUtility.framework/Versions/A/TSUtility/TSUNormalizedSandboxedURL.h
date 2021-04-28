/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUSandboxedURL.h>

@class TSUSandboxedURL;

@interface TSUNormalizedSandboxedURL : TSUSandboxedURL {

	TSUSandboxedURL* _originalSandboxedURL;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)originalSandboxedURLForNormalizing;
-(id)initWithURL:(id)arg1 originalSandboxedURL:(id)arg2 ;
-(char)hasSandboxAccess;
@end

