/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface _CNSortsByPositionInAuxiliaryArray : NSObject {
    NSArray * _auxiliaryValues;
    NSDictionary * _ranks;
    id  _transform;
}

@property (nonatomic, readonly, copy) NSArray *auxiliaryValues;
@property (nonatomic, readonly, copy) NSDictionary *ranks;
@property (nonatomic, readonly, copy) id transform;

+ (id)comparatorForSortingAccordingToAuxiliaryValues:(id)arg1 transform:(id)arg2;

- (void).cxx_destruct;
- (id)auxiliaryValues;
- (id)comparator;
- (id)initWithAuxiliaryValues:(id)arg1 transform:(id)arg2;
- (void)prepareRankingIndex;
- (id)rankForObject:(id)arg1;
- (id)ranks;
- (id)transform;

@end
