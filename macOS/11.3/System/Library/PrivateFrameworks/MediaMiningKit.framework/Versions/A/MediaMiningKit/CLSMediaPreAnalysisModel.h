/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSSignalModel.h>

@class CLSSignalNode, NSString;

@interface CLSMediaPreAnalysisModel : NSObject <CLSSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	CLSSignalNode* _sharpnessNode;
	CLSSignalNode* _exposureNode;

}

@property (readonly) CLSSignalNode * sharpnessNode;                           //@synthesize sharpnessNode=_sharpnessNode - In the implementation block
@property (readonly) CLSSignalNode * exposureNode;                            //@synthesize exposureNode=_exposureNode - In the implementation block
@property (readonly) unsigned long long version;                              //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long minimumSupportedVersion;              //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)name;
+(unsigned long long)latestVersion;
+(unsigned long long)currentAnalyzerVersion;
+(id)modelWithVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(unsigned long long)minimumSupportedVersion;
-(void)setupVersion31;
-(CLSSignalNode *)sharpnessNode;
-(CLSSignalNode *)exposureNode;
-(void)setupVersion45;
@end

