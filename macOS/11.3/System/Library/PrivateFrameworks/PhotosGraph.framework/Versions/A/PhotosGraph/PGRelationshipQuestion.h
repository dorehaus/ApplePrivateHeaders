/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString;

@interface PGRelationshipQuestion : PGSurveyQuestion {

	unsigned short _state;
	NSDictionary* _additionalInfo;
	NSString* _entityIdentifier;
	double _localFactoryScore;

}
-(unsigned short)state;
-(unsigned short)type;
-(unsigned short)displayType;
-(id)additionalInfo;
-(unsigned short)entityType;
-(id)entityIdentifier;
-(double)localFactoryScore;
-(id)initWithRelationshipLabel:(id)arg1 personIdentifier:(id)arg2 localFactoryScore:(double)arg3 ;
@end

