/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DPDataRecorder_DPDataRecorderKeyProperties;
@interface _DPNumericDataRecorder : NSObject {

	id<_DPDataRecorder><_DPDataRecorderKeyProperties> _recorder;

}

@property (nonatomic,readonly) id<_DPDataRecorder><_DPDataRecorderKeyProperties> recorder;              //@synthesize recorder=_recorder - In the implementation block
-(id)description;
-(id)init;
-(id)initWithKey:(id)arg1 ;
-(char)record:(id)arg1 ;
-(id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(char)arg3 ;
-(id<_DPDataRecorder><_DPDataRecorderKeyProperties>)recorder;
@end

