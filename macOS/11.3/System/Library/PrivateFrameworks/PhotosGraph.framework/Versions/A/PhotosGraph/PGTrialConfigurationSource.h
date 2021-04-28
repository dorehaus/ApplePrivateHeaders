/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGConfigurationSource.h>

@class PGTrialSession, NSString;

@interface PGTrialConfigurationSource : NSObject <PGConfigurationSource> {

	unsigned short _namespaceType;
	PGTrialSession* _trialSession;

}

@property (nonatomic,retain) PGTrialSession * trialSession;              //@synthesize trialSession=_trialSession - In the implementation block
@property (assign,nonatomic) unsigned short namespaceType;               //@synthesize namespaceType=_namespaceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKey:(id)arg1 ;
-(unsigned short)namespaceType;
-(PGTrialSession *)trialSession;
-(void)setTrialSession:(PGTrialSession *)arg1 ;
-(id)initWithTrialSession:(id)arg1 namespaceType:(unsigned short)arg2 ;
-(void)setNamespaceType:(unsigned short)arg1 ;
@end

