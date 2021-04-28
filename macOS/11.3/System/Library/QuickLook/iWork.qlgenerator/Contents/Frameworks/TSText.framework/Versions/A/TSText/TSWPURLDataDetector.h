/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSWPDataDetectorProtocol.h>

@class NSDataDetector, NSString;

@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol> {

	NSDataDetector* _detector;

}

@property (nonatomic,retain) NSDataDetector * detector;              //@synthesize detector=_detector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(NSRange)expandValidRange:(NSRange)arg1 inString:(id)arg2 ;
+(id)newArrayByScanningString:(id)arg1 scanRange:(NSRange)arg2 ;
+(id)newURLFromString:(id)arg1 ;
+(id)detectorIdentifier;
+(void)setInvalidURLSchemes:(id)arg1 ;
+(NSRange)calculateScanRangeForString:(id)arg1 changedRange:(NSRange)arg2 ;
+(id)scanString:(id)arg1 scanRange:(NSRange)arg2 ;
+(char)detectedDataInString:(id)arg1 scanRange:(NSRange)arg2 withTextCheckingTypes:(unsigned long long)arg3 ;
+(id)p_newArrayByScanningString:(id)arg1 scanRange:(NSRange)arg2 returnAllResults:(char)arg3 dataDetector:(id)arg4 ;
+(id)_newDetector;
+(id)p_rangesSplitByNewLineOfString:(id)arg1 scanRange:(NSRange)arg2 ;
-(id)init;
-(id)scanString:(id)arg1 ;
-(NSDataDetector *)detector;
-(id)initWithTextCheckingType:(unsigned long long)arg1 ;
-(void)setDetector:(NSDataDetector *)arg1 ;
@end

