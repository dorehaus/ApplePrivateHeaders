/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/Versions/A/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEFile : NSObject {

	shared_ptr<siri::dialogengine::File>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::File>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * paramsFilename; 
@property (retain) NSString * id; 
@property (retain) NSString * localeFilename; 
-(id)init;
-(id)execute:(id)arg1 ;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
-(id)getRoot;
-(void)setThis:(shared_ptr<siri::dialogengine::File>*)arg1 ;
-(shared_ptr<siri::dialogengine::File>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::File>*)arg1 ;
-(shared_ptr<siri::dialogengine::File>*)getSharedPtr;
-(NSString *)paramsFilename;
-(void)setParamsFilename:(NSString *)arg1 ;
-(NSString *)localeFilename;
-(void)setLocaleFilename:(NSString *)arg1 ;
-(id)getParameters;
-(id)getDialogs;
-(void)addPhrase:(id)arg1 ;
-(id)getValidationErrors;
-(id)getValidationWarnings;
@end

