/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCNPredicate : NSPredicate <NSCopying> {
    NSPredicate * _abcn_predicate;
}

- (id)cn_predicate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)evaluateWithObject:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)init;
- (id)initWithPredicate:(id)arg1;
- (id)predicateFormat;

// ABCNPredicate (CoreDataPredicate)

- (id)cn_coreDataPredicate;

@end
