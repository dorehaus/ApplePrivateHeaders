/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVAssetAnalysisMessage.h>

@class NSDictionary, AVMovieAtom, NSString;

@interface AVAssetAnalysisMovieParsingMessage : AVAssetAnalysisMessage {

	NSDictionary* _movieParsingMessageFigDictionary;
	AVMovieAtom* _movieAtom;

}

@property (readonly) NSString * diagnosticInformation; 
@property (readonly) NSString * messageType; 
@property (readonly) AVMovieAtom * movieAtom; 
@property (readonly) NSString * mediaType; 
@property (readonly) int trackID; 
+(id)assetAnalysisMovieParsingMessageWithFigDictionary:(id)arg1 ;
-(void)dealloc;
-(NSString *)mediaType;
-(NSString *)messageType;
-(int)trackID;
-(id)initWithFigDictionary:(id)arg1 ;
-(NSString *)diagnosticInformation;
-(AVMovieAtom *)movieAtom;
@end

