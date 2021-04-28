/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription, MLModelConfiguration;

@interface _MLVNScenePrintCustomModel : NSObject <MLCustomModel> {

	MLModelDescription* _modelDescription;
	unsigned long long _scenePrintRequestRevision;
	MLModelConfiguration* _configuration;

}

@property (nonatomic,readonly) MLModelDescription * modelDescription;                     //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long scenePrintRequestRevision;              //@synthesize scenePrintRequestRevision=_scenePrintRequestRevision - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * configuration;                      //@synthesize configuration=_configuration - In the implementation block
-(MLModelConfiguration *)configuration;
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned long long)arg2 ;
-(unsigned long long)scenePrintRequestRevision;
@end

